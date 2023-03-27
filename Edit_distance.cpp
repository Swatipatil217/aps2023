#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    int l1=str1.length();
    int l2=str2.length();
    int dp[l1+1][l2+1];
    int ans=0;
    int x=0,y=0,z=0;
    int m=0;
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if(str1[i-1]==str2[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                x=dp[i][j-1];
                y=dp[i-1][j];
                z=dp[i-1][j-1];
                ans=min(x,y);
                m=min(ans,z);
                dp[i][j]=m+1;
            }
        }
    }
    cout<<dp[l1][l2];
    return 0;
}

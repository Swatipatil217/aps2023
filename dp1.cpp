#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    int dp[20][20];
    int ans=0;
    for(int i=0;i<m;i++)
    {
        dp[0][i]=0;
    }
    for(int i=0;i<n;i++)
    {
        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i]==s2[j])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                ans=dp[i][j];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                ans=dp[i][j];
            }
        }
    }
    cout<<ans<<endl;
}

#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>sum;
    int dp[n+1][sum+1];
    for(int j=1;j<=sum;j++)
    {
        dp[0][j]=0;
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=1;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(dp[i-1][j]==1)
            {
                dp[i][j]=1;
                ans=dp[i][j];
            }
            else if(a[i-1]>j)
            {
                dp[i][j]=0;
                ans=dp[i][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j-a[i-1]];
                ans=dp[i][j];
            }

        }
    }
    cout<<ans<<endl;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int dp[n+1];
    dp[0]=0;
    dp[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        dp[i]=max(dp[i-1],a[i]+dp[i-2]);
    }
    cout<<dp[n]<<endl;
}

//Given a rod of length n inches and an array of prices that includes prices of all pieces
//of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int dp[n+1];
    dp[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i<=n; i++)
   {
       int max_val = INT_MIN;
       for (int j = 0; j < i; j++)
         max_val = max(max_val, arr[j] + dp[i-j-1]);
       dp[i] = max_val;
   }

    cout<<dp[n]<<endl;
}

//Consider a money system consisting of n coins. Each coin has a positive
//integer value. Your task is to calculate the number of distinct
//ordered ways you can produce a money sum x using the available coins.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int coins[n];
	for (int i = 0; i < n; i++) { cin >> coins[i]; }
	int dp[x+1];
	for (int i = 0; i <= x; i++)
    {
        dp[i]=0;
    }
	dp[0] = 1;
	for (int j =0; j< n; j++) {
		for (int i =1; i<= x; i++) {
			if (i - coins[j] >= 0) {
				dp[i] += dp[i- coins[j]];
			}
		}
	}
	cout << dp[x] << '\n';
}

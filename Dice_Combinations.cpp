//Your task is to count the number of ways to construct sum n
// by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAXN 1000001
#define MOD 1000000007

int DP[MAXN], n;

int compute (int left) {
    if (DP[left] != 0) {
        return DP[left];
    }
    for (int i = 1; i <= 6; i++) {
        if (left - i >= 0) {
            DP[left] += compute(left - i);
            DP[left] %= MOD;
        }
    }
    return DP[left];
}

int main() {
    cin >> n;
    memset(DP, 0, sizeof(DP));
    DP[0] = 1;
    cout << compute(n) << endl;
}

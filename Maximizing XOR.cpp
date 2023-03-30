#include<bits/stdc++.h>
using namespace std;

int maxXor(int l, int r) {
    int a=0;
    for (int i=l;i<=r;i++)
        for (int j=i;j<=r;j++)
        a=max(a,(i^j));
        return a;
}

int main() {
    int res;
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    res = maxXor(_l, _r);
    cout << res;

    return 0;
}

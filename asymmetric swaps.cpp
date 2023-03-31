//asymmetric swaps codechef solution

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        std::vector<long long int>arr;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        long long int x=1e9;
        for(int i=0;i<=n;i++)
        {
            x=min(x,arr[n+i-1]);
            x=min(x,arr[i]);
        }
        cout<<x<<endl;
    }
	return 0;
}

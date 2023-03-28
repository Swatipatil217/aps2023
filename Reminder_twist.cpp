//March Circuits '23: hackerearth Reminder_twist challenge problem solution

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, r;
		cin>>n>>r;
		vector<int> v(n, 0);
		int k =2;
		v[0] = 2*n - 1;
		for(int i=1; i<n; i++) {
			v[i] = n-i;
			if(n-k > 0)
				v[i]+= n-k;
			k = k+2;
		}
		int i, ans=0,f=0;
		for(i=n-1; i>=0; i--) {
			ans += v[i];
			if(ans >= r)
            {
                f=1;
				break;
            }
		}
        if(f==1)
    		cout<<i<<"\n";
        else
        {
            if(r<=n*n)
                cout<<"0\n";
            else
                cout<<"-1\n";
        }
	}
}

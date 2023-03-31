//codechef solution:Delete a Subarray

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	t=1324;
	double decker=0.3;
	unsigned long long b =124123;
	ll asaf=b+1;
	cin >> t;
	while(t--)
	{
		ll n, ans = 0;
        cin >> n;

        ll arr[n];

        for(int i=0;i<n;i++)cin >> arr[i];

        if(n == 1){cout << 0 << endl;continue;}





        int front = 0, rear = n-1;

        while(front < n-2 and arr[front+1] > arr[front]){
        	front++;
        }


        ans = front+2;


        while(rear > 1 and arr[rear-1] < arr[rear]){
        	rear--;
        	ans++;
        }

         if(ans == 2*(n-1)){
            ans += ((n-2)*(n-1))/2;
            cout << ans << endl;
            continue;
        }
        vector<ll> v;

        for(int i=rear;i<n;i++)	v.push_back(arr[i]);

        for(int i=0;i<front+1;i++){

            ans += v.size() - ((upper_bound(v.begin(), v.end(), arr[i]) - v.begin()));
        }
        cout << ans << endl;
	}
}

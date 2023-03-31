//Array Halves codechef solution

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int size=2*n;
	    int a[size];

	    for(int i=0;i<size;i++)
	    {
	        cin>>a[i];
	    }
	    vector<long long int> diff1;
	    vector<long long int> diff2;

	    for(int i=0;i<size;i++)
	    {
	        if(a[i]>size/2 && i<size/2)
	        {
	            diff1.push_back(i+1);
	        }
	        if(a[i]<=size/2 && i>=size/2)
	        {
	            diff2.push_back(i+1);
	        }
	    }
	    long long int op=0;
	    for(int i=0;i<diff1.size();i++)
	    {
	        op+=abs(diff1[i]-diff2[i]);
	    }
	    cout<<op<<endl;
	}
	return 0;
}

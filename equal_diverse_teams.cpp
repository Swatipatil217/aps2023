#include <iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t=0,n=0,k=0,x=0,mx=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		map <int,int> mg;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			mg[x]++;
		}
		int unq=mg.size();
		if(unq%2!=0)
			unq=unq+1;
		map<int, int>::iterator itr;
    	for(itr=mg.begin();itr!=mg.end();itr++)
    	{
			if(itr->second<2)
				mx+=itr->second;
			else
				mx+=2;
    	}
		if(unq>mx)
			cout<<"NO\n";
		else
		{
			if(mx>=2*k && k>=unq/2)
			{
				cout<<"YES\n";
			}
			else
				cout<<"NO\n";
		}
		mx=0;
	}
	return 0;
}

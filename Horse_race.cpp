#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;
void min1(long int *a,int n)
{
	int ind=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[ind])
			ind=i;
	}
	a[ind]++;
}

void min2(long int *a,int n)
{
	int ind1=0,ind2=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[ind1])
			ind1=i;
		if(a[i]>a[ind2])
			ind2=i;
	}
	a[ind1]++;
	a[ind2]--;
}

int main() {
	long int t=0,n=0,m=0,x=0,k=0,dif=0,mx=0,mn=INT16_MAX;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>x;
		long int a[n],b[m];
		map <long int,long int> mg;
		for(long int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=m)
				mg[a[i]]++;
		}
		dif=n;
		map <long int,long int>::iterator it;
		int i=0;
		for(it=mg.begin();it!=mg.end();it++)
		{
			// cout<<it->first<<" "<<it->second<<"\n";
			dif=dif-it->second;
			b[i]=it->second;
			i++;
		}
		if(mg.size()<m)
		{
			for(long int i=mg.size();i<m;i++)
				b[i]=0;
		}
		sort(b,b+m);
		if(dif>=x)
		{
			while(x--)
			{
				min1(b,m);
			}
		}
		else
		{
			long int h=x-dif-1;
			if(dif==0)h++;
			while(dif--)
			{
				min1(b,m);
			}
			while(h--)
			{
				min2(b,m);
				// cout<<"h: "<<h<<"\n";
			}
		}
		sort(b,b+m);
		cout<<b[0]<<"\n";
		dif=0;
		mx=0;
		mn=INT16_MAX;
	}
}



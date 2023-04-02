#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find(int a[],int b,int c,int d,int n)
{
   vector<int> v(a,a+n);
   sort(v.begin() + (b-1), v.begin() + (c-1) + 1);

  for(int i=b-1;i<c;i++)
  {
      d--;
      if(d==0)
      {
          return v[i];
      }
  }
    return -1;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        while(k--)
        {
            int l;
            cin>>l;
            if(l==0)
            {
                int b,c,d;
                cin>>b>>c>>d;
                cout<<find(a,b,c,d,n)<<endl;
            }
            else if(l==1)
            {
                int y,z;
                cin>>y>>z;
                a[y-1]=z;
            }
        }
    }
    return 0;
}

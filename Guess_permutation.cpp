//February Circuits '23: hackerearth Guess Permutation solution

#include<iostream>
using namespace std;

int main()
{
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
        int b[n+1];
        b[0]=a[0]+1;
        for(int i=1;i<=n;i++)
        {
           b[i]=b[i-1]+a[i];
        }
        for(int i=0;i<=n;i++)
        {
            c[i]=b[i];
        }
        sort(b,b+n+1);
        int f=0;
        for(int i=0;i<=n;i++)
        {
           if(b[i]!=i+1)
           {
               cout<<"-1"<<endl;
               f=1;
               break;
           }
        }
        if(f==0)
        {
            for(int i=0;i<=n;i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
        }
    }
}

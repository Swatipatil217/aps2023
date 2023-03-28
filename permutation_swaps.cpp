//February Circuits '23: hackerearth permutation swaps solution



    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    int main() {
      int t;
      cin>>t;
      while(t--)
      {
        int n;
        cin>>n;
        int p=0;
        bool c=true;
        for(int i=1 ; i <=n ; i++)
        {
          int a;
          cin>>a;
          if((a+p)<i)
          {
            c=false;
          }
          p=a+p-i;
        }
    	if(c && p == 0)
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}
      }
    }

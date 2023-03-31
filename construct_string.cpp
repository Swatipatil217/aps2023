//codechef solution: construct string

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int var=s[0];
        int temp=1;
        string ans="";
        for(int i=1;i<n;i++)
        {
            if(var==s[i])
            {
                temp++;
            }
            else
            {
                if(temp%2==0)
                {
                 ans+=var;
                 ans+=var;
                }
                else
                {
                    ans+=var;
                }
                var=s[i];
                temp=1;
            }
        }
         if(temp%2==0)
                {
                 ans+=var;
                 ans+=var;
                }
                else
                {
                    ans+=var;
                }

        cout<<ans<<endl;
    }
}

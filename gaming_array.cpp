#include<bits/stdc++.h>
using namespace std;

string gamingArray(vector<int> arr) {
    map<int, int> m;
    int len = arr.size();
    for (int i = 0; i < len; ++i)
    {
        m[arr[i]] = i;
    }
    int cur_index = len;
    int round = 0;
    for (auto it = m.rbegin(); it != m.rend(); it++)
    {
        if (it->second < cur_index)
        {
            cur_index = it->second;
            ++round;
        }
    }
    return round % 2 == 0 ? "BOB" : "ANDY";
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
     for (int i = 0; i <n; i++) {
            int l;
     cin>>l;
            arr.push_back(l);
        }
        cout<<gamingArray(arr)<<endl;
}

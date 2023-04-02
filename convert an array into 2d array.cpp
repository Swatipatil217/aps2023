//leetcode solution: convert an array into 2D array with conditions

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findMatrix(vector<int>& nums) {
       map<int,int>mp;
        for(auto x: nums) mp[x]++;
        int mx=0;
        for(auto x: mp)
        {
            if(x.second>mx) mx=x.second;
        }

        vector<vector<int>>vec(mx);
        for(int i=0;i<mx;i++)
        {
            for(auto x:mp)
            {
                if(x.second>0)
                {
                    vec[i].push_back(x.first);
                    mp[x.second]--;
                }
            }
        }
        for (int i = 0; i < mx; i++) {
        for (
            auto it = vec[i].begin();
            it != vec[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    }
};

int main()
{
    int n,a;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    Solution s;
    s.findMatrix(nums);

}

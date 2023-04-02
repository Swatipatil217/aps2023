// Prime Subtraction Operation leetcode solution
#include<bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int findSmallestInteger(vector<int>& nums, int value) {
    unordered_map<int, int> count;

    for (const int num : nums)
      ++count[(num % value + value) % value];

    for (int i = 0; i < nums.size(); ++i)
      if (--count[i % value] < 0)
        return i;

    return nums.size();
  }
};

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int value;
    cin>>value;
    Solution s;
    cout<<s.findSmallestInteger(nums,value)<<endl;
}

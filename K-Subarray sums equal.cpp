//Make K-Subarray Sums Equal leetcode solution

class Solution {
public:
    long long makeSubKSumEqual(vector<int>& arr, int k) {
      long long n=arr.size();
        if(__gcd(n,(long long)k)==1)
            return mincost(arr,n);
        else
        {
            long long ans=0;
            for(int i=0;i<__gcd(n,(long long)k);i++)
            {
                vector<int> v1;
                for(int j=i;j<arr.size();j+=__gcd(n,(long long)k))
                {
                    v1.push_back(arr[j]);
                }
                ans+=mincost(v1,v1.size());
            }
            return ans;
        }
        return 0;
    }

    long long mincost(vector<int>&A,int n)
    {
        long long cost=0;
        sort(A.begin(),A.end());
        long long k=A[n/2];
        for(int i=0;i<n;i++)
        {
            cost+=abs(A[i]-k);
        }
        if(n%2==0)
        {
            long long tc=0;
            k=A[(n/2)-1];
            for(int i=0;i<n;i++)
        {
            tc+=abs(A[i]-k);
        }
            cost=min(cost,tc);
        }
        return cost;
    }
};

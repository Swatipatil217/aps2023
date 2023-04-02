// Prime Subtraction Operation leetcode solution

class Solution {
public:
vector<int> getPrimes() {
    vector<int> ps = {2}, sieve(1001);
    for (int i = 3; i < 32; ++i)
        if (!sieve[i])
            for (int j = i * i; j <= 1000; j += i)
                sieve[j] = true;
    for (int i = 3; i <= 1000; i += 2)
        if (!sieve[i])
            ps.push_back(i);
    return ps;
}
bool primeSubOperation(vector<int>& nums) {
    auto ps = getPrimes();
    for (int i = 0; i < nums.size(); ++i) {
        auto it = lower_bound(begin(ps), end(ps), nums[i] - (i ? nums[i - 1] : 0));
        if (it != begin(ps))
            nums[i] -= *prev(it);
        if (i && nums[i] <= nums[i - 1])
            return false;
    }
    return true;
}
};
public:
    int shortest_cycle(int n,vector<int> gr[])
    {
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            vector<int> dist(n,(int)(1e9));
            vector<int> par(n,-1);
            dist[i]=0;
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
                for(int child:gr[x])
                {
                    if(dist[child]==(int)(1e9))
                    {
                        dist[child]=1+dist[x];
                        par[child]=x;
                        q.push(child);
                    }
                    else if(par[x]!=child and par[child]!=x)
                        ans=min(ans,dist[x]+dist[child]+1);
                }
            }
        }
        if(ans==INT_MAX) return -1;
        else
            return ans;
    }

    int findShortestCycle(int n, vector<vector<int>>& edges) {
       vector<int>adj[n];
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        return shortest_cycle(n,adj);
    }
};

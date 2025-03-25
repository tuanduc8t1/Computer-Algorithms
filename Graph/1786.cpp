class Solution {
public:
    const int mod = 1e9 + 7;
    int dfs(vector<pair<int,int>>adj[],int u,int v,vector<int>&dist,vector<int>&dp){
        if(u==v) return 1;
        if(dp[u]!=-1) return dp[u];
        int res=0;
        for(auto x: adj[u]){
            int k= x.first;
            if(dist[u] > dist[k])
                res = (res % mod + dfs(adj,k,v,dist,dp)% mod)%mod;
        }
        return dp[u]= res;
    }
    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        vector<pair<int,int>>adj[n+1];
        for(auto x: edges){
            adj[x[1]].push_back({x[0],x[2]});
            adj[x[0]].push_back({x[1],x[2]});
        }
        vector<int>dist(n+1,INT_MAX);
        dist[n]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push({0,n});
        while(!q.empty()){
            int d= q.top().first;
            int u= q.top().second;
            q.pop();
            
            for(auto x: adj[u]){
                int v= x.first;
                int dis= x.second;
                if(dist[v] > d + dis){
                    dist[v]= d + dis;
                    q.push({dist[v],v});
                }
            }
        }
        vector<int>dp(n+1,-1);
        return dfs(adj,1,n,dist,dp);
    }
};

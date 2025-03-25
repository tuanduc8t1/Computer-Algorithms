class Solution {
public:
    #define ll long long
    ll mod = 1e9 + 7;
    ll countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>> adj[n];
        for(auto it: roads){
            adj[it[0]].push_back({it[1],it[2]});  
            adj[it[1]].push_back({it[0],it[2]});  
        }
        
        vector<ll> dist(n,1e16),ways(n,0);
        dist[0]=0;
        ways[0]=1;
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
        pq.push({0,0});
        while(!pq.empty()){
            auto zt=pq.top();
            pq.pop();
            ll d=zt.first, u=zt.second;
            if(dist[u]<d) continue;
            for(auto it:adj[u]){
                ll v=it.first,t=it.second;
                if(dist[v]>d+t){
                    dist[v]=d+t;
                    ways[v]=ways[u];
                    pq.push({dist[v],v});
                }
                else if(dist[v]==d+t){
                    ways[v]=(ways[v]+ways[u])%mod;
                }
            }
        }
        return ways[n-1];
        
    }
};

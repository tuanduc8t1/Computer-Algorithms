class Solution {
public:
    int par[200005];  
    int findset(int v) {
        return par[v] == v ? v : par[v] = findset(par[v]);
    }    
    void merge(int u , int v) {
        u = findset(u);
        v = findset(v);
        if(u == v) return;
        par[u] = v; 
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        for(int i=0;i<n;i++) par[i] = i; 
        for(auto it : edges) {
            merge(it[0], it[1]);
        }                         
        return findset(start) == findset(end); 
    }
};

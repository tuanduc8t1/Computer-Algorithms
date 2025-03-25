class Solution {
public:
    int d[20005] = {0}, trace[200005] = {0};
    vector<int> adj[20005], pass;
    void dfs(int u){
        for(auto v : adj[u]){
            if(d[v] == 0){
                d[v] = d[u] + 1;
                trace[v] = u;
                dfs(v);
            }
        }
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 1){
            vector<int> res;
            res.push_back(0);
            return res;
        }
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        d[0] = 1;
        dfs(0);
        int pta = -1, mxa = 0;
        for(int i = 0;i < n; i++){
            if(d[i] > mxa){
                mxa = d[i];
                pta = i;
            }
        }
        for(int i = 0;i < n; i++){
            d[i] = 0;
        }
        d[pta] = 1;
        dfs(pta);
        int ptb = -1, mxb = 0;
        for(int i = 0;i < n; i++){
            if(d[i] > mxb){
                mxb = d[i];
                ptb = i;
            }
        }
        do{
            pass.push_back(ptb);
            ptb = trace[ptb];
        }while(ptb != pta);
        pass.push_back(pta);
        vector<int> res;
        if((int) pass.size() % 2 == 0){
            res.push_back(pass[(int) pass.size() / 2]);
            res.push_back(pass[(int) pass.size() / 2 - 1]);
        }else{
            res.push_back(pass[(int) pass.size() / 2]);
        }
        return res;
    }
};

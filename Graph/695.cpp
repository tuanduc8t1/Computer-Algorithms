class Solution {
public:
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};

    int getParent(vector<int> &s, int a){
        return s[a] <0 ? a : s[a] = getParent(s, s[a]); 
    }
    
    void merge(vector<int> &s, int a, int b){
        a = getParent(s, a); b = getParent(s, b);
        if (a == b) return;
        if (s[a] > s[b]) swap(a, b);
        s[a] += s[b]; 
        s[b] = a;
        return;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> ds(n*m, 0);
        
        for (int i=0; i<n; i++){
            for (int j = 0; j<m; j++){
                if (grid[i][j] == 1)ds[(m*i)+j]= -1;
            }
        }
        
        for (int i=0; i<n; i++){
            for (int j = 0; j<m; j++){
                if (grid[i][j] == 1){
                    for (int k = 0; k<4; k++){
                        int ni = i+dx[k], nj = j+dy[k];
                        if ((ni>=0 && ni<n) && (nj>=0 && nj<m) && (grid[ni][nj]==1)){
                            int a = (m*i)+j, b = (m*ni)+nj;
                            merge(ds, a, b);
                        }
                    }
                }
            }
        }
        int ans = *min_element(ds.begin(), ds.end());
        return -ans;
    }
};

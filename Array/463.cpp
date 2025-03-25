class Solution {
public:
	int cnt=0;
    void DFS(vector<vector<int>>& grid,int i,int j){
		if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j]==0){
			cnt++;
			return;
		}

		if(grid[i][j]==-1) return;
        grid[i][j]=-1;

		DFS(grid,i,j+1);
		DFS(grid,i,j-1);
		DFS(grid,i+1,j);
		DFS(grid,i-1,j);  
	}
	int islandPerimeter(vector<vector<int>>& grid) {
		for(int i=0;i<grid.size();i++){
			for(int j=0;j<grid[i].size();j++){
				if(grid[i][j]==1){
					DFS(grid,i,j);
					break;
				}    
			}
		}
		return cnt;
	}
};

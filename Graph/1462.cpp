class Solution {
public:
    void bfs(vector<int>adjList[], vector<bool>&visited, int s, int t) {
        visited[s]=true;

        queue<int>q;
        q.push(s);

        while(!q.empty()) {
            int u = q.front(); 
            q.pop(); 

            for(auto it: adjList[u]) {
                if(!visited[it]) {
                    visited[it]=true;
                    q.push(it);
                }

                if(it == t) return ;
            }
        }
    }

    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<int>adjList[numCourses];

        for(auto it: prerequisites) {
            adjList[it[0]].push_back(it[1]);
        }

        vector<bool>visited(numCourses,false);
        vector<bool>answer;

        for(auto it: queries) {
            fill(visited.begin(), visited.end(), false);
            bfs(adjList,visited,it[0],it[1]);

            answer.push_back(visited[it[1]] == true);
        }

        return answer;
    }
};

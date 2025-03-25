class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& preq) {
        int deg[100005]={0};
        vector<int> graph[100005];
        vector<int> res;
        for(int i=0;i<preq.size();i++){
            graph[preq[i][1]].push_back(preq[i][0]);
            deg[preq[i][0]]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(deg[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int x=q.front();
            q.pop();
            res.push_back(x);
            for(auto it:graph[x]){
                deg[it]--;
                if(deg[it]==0){
                    q.push(it);
                }
            }
        }
        return res.size()==numCourses;
    }
};

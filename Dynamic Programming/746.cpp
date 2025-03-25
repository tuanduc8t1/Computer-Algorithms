class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for (int i=cost.size()-1; i>=0; i--){
            if(i==cost.size()-1 || i== cost.size()-2){}
        else cost[i]=min(cost[i]+cost[i+1],cost[i]+cost[i+2]);
        }
        return min(cost[0], cost[1]);
    }
};

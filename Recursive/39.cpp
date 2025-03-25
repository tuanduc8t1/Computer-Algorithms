class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& candidates, int target , int idx , vector<int>& v){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(idx==candidates.size()) return;

        if(candidates[idx]<=target){ 
            v.push_back(candidates[idx]);
            helper(candidates,target-candidates[idx],idx,v);
            v.pop_back();
        }

        int j = idx+1;
        while(j<candidates.size() && candidates[j]==candidates[j-1]) j++;
        helper(candidates,target,j,v); 
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        helper(candidates,target,0,v);
        return ans;
    }
};

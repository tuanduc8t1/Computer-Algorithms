class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> res(nums.size());
        vector<pair<int,int>> rnks;
        for(int i=0;i<nums.size();i++) rnks.push_back({nums[i],i});
        sort(rnks.begin(),rnks.end(),greater<pair<int,int>>());
        for(int i = 0;i<rnks.size();i++){
            if(i==0) res[rnks[i].second] = "Gold Medal";
            else if(i==1) res[rnks[i].second] = "Silver Medal";
            else if(i==2) res[rnks[i].second] = "Bronze Medal";
            else res[rnks[i].second]=to_string(i+1);
        }
        return res;  
    }
};

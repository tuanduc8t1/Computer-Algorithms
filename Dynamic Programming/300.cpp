class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp;
        int cnt = 0, res[2555];
        for(auto it : nums){
            int pos = lower_bound(dp.begin(), dp.end(), it) - dp.begin();
            if(pos == (int) dp.size()){
                dp.push_back(it);
            }else{
                dp[pos] = it;
            }
        }
        return (int) dp.size();
    }
};

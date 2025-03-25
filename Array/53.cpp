class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = nums[0],sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if(sum < 0)sum = 0;
        maxx = max(sum, maxx);
    }
        bool xyz=true;
        for(int i=0;i<nums.size();i++)if(nums[i]>=0)xyz=false;
        if(xyz==false)return maxx;
        else{
            int minn=-1e9;
            for(int i=0;i<nums.size();i++)minn=max(minn,nums[i]);
            return minn;
        }
    }
};

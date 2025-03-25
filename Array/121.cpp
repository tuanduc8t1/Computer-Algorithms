class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MIN[100001],a,ans=0;
        MIN[0]=prices[0];
        for(int i=1;i<prices.size();i++){
            MIN[i]=min(MIN[i-1],prices[i]);
        }
        for(int i=1;i<prices.size();i++){
            ans=max(ans,prices[i]-MIN[i-1]);
        }
        return ans;
    }
};

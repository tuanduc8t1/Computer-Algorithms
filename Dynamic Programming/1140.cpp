class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int dp[105][205] = {0}, pre[105] = {0};
        int n = piles.size();
        for(int i = n;i >= 1; i--) pre[i] = pre[i + 1] + piles[i - 1];
        for(int i = n;i >= 1; i--){
            for(int m = 1;m <= n; m++){
                if(i + 2 * m > n) dp[i][m] = pre[i];
                else for(int x = 1;x <= 2 * m; x++) dp[i][m] = max(dp[i][m], pre[i] - dp[i + x][max(m, x)]);
            }
        }
        return dp[1][1];
    }
};

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[1005][1005] = {0};
        for(int i = 0;i <= 1000; i++) dp[0][i] = 0, dp[i][0] = 0, dp[0][0] = 0;
        for(int i = 1;i <= (int)text1.size(); i++){
            for(int j = 1;j <= (int)text2.size(); j++){
                if(text1[i - 1] == text2[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }else{
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[(int)text1.size()][(int)text2.size()];
    }
};

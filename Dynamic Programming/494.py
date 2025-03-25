class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        dp = [[0] * 5001 for _ in range(21)]
        dp[0][1000] = 1
        n = len(nums)
        for i in range(1,n + 1):
            for j in range(-1000, 1001):
                
                dp[i][j + 1000] += dp[i - 1][j + 1000 - nums[i - 1]]
                dp[i][j + 1000] += dp[i - 1][j + 1000 + nums[i - 1]]
        return dp[n][target + 1000]

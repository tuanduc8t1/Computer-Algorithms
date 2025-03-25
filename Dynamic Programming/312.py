class Solution:
    def maxCoins(self, nums: List[int]) -> int:
        n = len(nums)
        nums = [1] + nums + [1]
        dp = [[0] * (n + 2) for _ in range(n + 2)]
        for leng in range(1, n + 1):
            for l in range(1, n - leng + 2):
                r = l + leng - 1
                for k in range(l, r + 1):
                    dp[l][r] = max(dp[l][r], dp[l][k - 1] + dp[k + 1][r] + nums[l - 1] * nums[k] * nums[r + 1])
        return dp[1][n]

        

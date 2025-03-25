class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return nums[0]
        if n == 2:
            return max(nums[0], nums[1])
        dp = [0] * (n + 1)
        mx = -100000000000
        dp[0] = nums[0]
        dp[1] = nums[1]
        res = max(dp[0], dp[1])
        for i in range(2, n):
            mx = max(mx, dp[i - 2])
            dp[i] = max(dp[i], nums[i] + mx)
            res = max(res, dp[i])
        return res
        

        

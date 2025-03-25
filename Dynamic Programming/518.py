class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        n = len(coins)
        dp = [0] * (amount + 1)
        dp[0] = 1
        for j in coins:
            for i in range(1, amount + 1):
                if i >= j:
                    dp[i] += dp[i - j]
        return dp[amount]

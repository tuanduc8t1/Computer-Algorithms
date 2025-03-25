class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        x = [([0] * (n + 1)) for _ in range(m + 1)]
        x[0][0] = 1
        for i in range(m + 1):
            for j in range(n + 1):
                if i > 0:
                    x[i][j] += x[i - 1][j]
                if j > 0:
                    x[i][j] += x[i][j - 1]
        return x[m - 1][n - 1]
        

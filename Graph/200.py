class Solution(object):
    def numIslands(self, grid):
        m = len(grid)
        n = len(grid[0])
        res = 0
        check = [[False] * n for _ in range(m)]
        def dfs(i, j):
            check[i][j] = True
            if i + 1 < m and check[i + 1][j] == False and grid[i + 1][j] == '1':
                dfs(i + 1, j)
            if i - 1 >= 0 and check[i - 1][j] == False and grid[i - 1][j] == '1':
                dfs(i - 1, j)
            if j + 1 < n and check[i][j + 1] == False and grid[i][j + 1] == '1':
                dfs(i, j + 1)
            if j - 1 >= 0 and check[i][j - 1] == False and grid[i][j - 1] == '1':
                dfs(i, j - 1)
        for i in range(m):
            for j in range(n):
                if check[i][j] == False and grid[i][j] == '1':
                    res += 1
                    dfs(i, j)
        return res
        

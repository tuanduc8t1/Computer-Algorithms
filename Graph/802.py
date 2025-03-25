class Solution(object):
    def eventualSafeNodes(self, graph):
        dp = [0] * len(graph)
        n = len(graph)
        def dfs(u):
            if dp[u] != 0:
                if dp[u] == 1:
                    return True
                return False
            dp[u] = -1
            for v in graph[u]:
                if not dfs(v):
                    return False
            dp[u] = 1    
            return True
        res = []
        for i in range(n):
            if dfs(i):
                res.append(i)
        return res

        
        
        

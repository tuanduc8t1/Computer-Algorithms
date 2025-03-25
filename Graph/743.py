class Solution(object):
    def networkDelayTime(self, times, n, k):
        d = [[float('inf')] * (n + 1) for _ in range(n + 1)]
        for i in range(1,n + 1):
            d[i][i] = 0
        for ele in times:
            d[ele[0]][ele[1]] = ele[2]
        for i in range(1,n + 1):
            for j in range(1,n + 1):
                for ki in range(1,n + 1):
                    d[j][ki] = min(d[j][ki], d[j][i] + d[i][ki])
        res = 0
        for i in range(1,n + 1):
            res = max(res, d[k][i])
            if d[k][i] == float('inf'):
                return -1
        return res

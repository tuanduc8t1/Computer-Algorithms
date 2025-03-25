class Solution(object):
    def findTheCity(self, n, edges, distanceThreshold):
        adj = [[] for _ in range(n + 1)]
        for it in edges:
            adj[it[0]].append((it[1], it[2]))
            adj[it[1]].append((it[0], it[2]))
        def calc(k):
            m = len(edges)
            d = [float('inf')] * (n + 1)
            d[k] = 0
            pq = []
            heapify(pq)
            heappush(pq, (d[k], k))
            while len(pq) > 0:
                tmp = heappop(pq)
                if d[tmp[1]] < tmp[0]:
                    continue
                v = tmp[1]
                for vi, wi in adj[v]:
                    if d[vi] > d[v] + wi:
                        d[vi] = d[v] + wi
                        heappush(pq, (d[vi], vi))
            res = 0
            for i in range(0, n):
                if d[i] <= distanceThreshold and i != k:
                    res += 1
            return res
        ans = -1
        res = float('inf')
        for i in range(0, n):
            tmp = calc(i)
            if tmp <= res:
                res = tmp
                ans = i
        return ans
        

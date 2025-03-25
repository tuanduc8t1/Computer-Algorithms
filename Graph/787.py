class Solution(object):
    def findCheapestPrice(self, n, flights, src, dst, k):
        
        adj = [[] for _ in range(n + 1)]
        for it in flights:
            adj[it[0]].append((it[1], it[2]))
        d = [[float('inf')] * (k + 2) for _ in range(n + 2)]
        d[src][0] = 0
        pq = []
        heapify(pq)
        heappush(pq, (d[src][0], src, 0))
        while len(pq) > 0:
            tmp = heappop(pq)
            if tmp[2] > k:
                continue
            v = tmp[1]
            st = tmp[2]
            for vi, wi in adj[v]:
                if d[vi][st + 1] > d[v][st] + wi:
                    d[vi][st + 1] = d[v][st] + wi
                    heappush(pq, (d[vi][st + 1], vi, st + 1))
        res = float('inf')
        for st in range(0, k + 2):
            res = min(res, d[dst][st])
        return res if res != float('inf') else -1
        

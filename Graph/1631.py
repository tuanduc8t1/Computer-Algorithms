class Solution(object):
    def minimumEffortPath(self, heights):
        n = len(heights)
        m = len(heights[0])
        adj = [[[] for _ in range(m + 1)] for _ in range(n + 1)]
        dir = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        for x in range(n):
            for y in range(m):
                for dx, dy in dir:
                    nx, ny = x + dx, y + dy
                    if 0 <= nx < n and 0 <= ny < m:
                        adj[nx][ny].append((x, y, abs(heights[nx][ny] - heights[x][y])))
        pr = [[float('inf')] * (m + 1) for _ in range(n + 1)]
        pr[0][0] = 0
        heap = [(0, 0, 0)]
    
        while heap:
            pru, ux, uy = heapq.heappop(heap)
            if ux == n - 1 and uy == m - 1:
                return pru
            for vx, vy, prv in adj[ux][uy]:
                prn = max(pru, prv)
                if prn < pr[vx][vy]:
                    pr[vx][vy] = prn
                    heapq.heappush(heap, (pr[vx][vy], vx, vy))   
        return 0
        

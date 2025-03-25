class Solution(object):
    def maxProbability(self, n, edges, succProb, start_node, end_node):
        adj = [[] for _ in range(n)]
        for _ in range(len(edges)):
            adj[edges[_][0]].append((edges[_][1], succProb[_]))
            adj[edges[_][1]].append((edges[_][0], succProb[_]))
        pr = [0.0] * n
        pr[start_node] = 1.0
        max_heap = [(-1.0, start_node)]
    
        while max_heap:
            pru, u = heapq.heappop(max_heap)
            pru *= -1        
            if u == end_node:
                return pru
        
            for v, prv in adj[u]:
                prn = pru * prv
                if prn > pr[v]:
                    pr[v] = prn
                    heapq.heappush(max_heap, (-pr[v], v))   
        return 0.0
        

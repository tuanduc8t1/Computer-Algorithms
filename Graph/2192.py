class Solution(object):
    def getAncestors(self, n, edges):
        deg = [0] * n
        adj = [[] for _ in range(n)]
        for it in edges:
            adj[it[0]].append(it[1])
            deg[it[1]] += 1
        pq = []
        ans = [set() for _ in range(n)]
        for i in range(n):
            if deg[i] == 0:
                pq.append(i)
        while len(pq) > 0:
            u = pq[0]
            pq.pop(0)
            for v in adj[u]:
                ans[v].add(u)
                for x in ans[u]:
                    ans[v].add(x)
                deg[v] -= 1
                if deg[v] == 0:
                    pq.append(v)

        res = [[] for _ in range(n)]
        for i in range(n):
            for it in ans[i]:
                res[i].append(it)
            res[i].sort()
        return res

        

        

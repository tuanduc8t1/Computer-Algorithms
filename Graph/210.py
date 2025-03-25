class Solution(object):
    def findOrder(self, numCourses, prerequisites):
        deg = [0] * numCourses
        pq, tp = [], []
        vis = [False] * numCourses
        adj = [[] for _ in range(numCourses)]
        for it in prerequisites:
            deg[it[0]] += 1
            adj[it[1]].append(it[0])
        def dfs(u):
            vis[u] = True
            for v in adj[u]:
                if vis[v] == False:
                    dfs(v)
            tp.append(u)
        for u in range(numCourses):
            if vis[u] == False and deg[u] == 0:
                dfs(u)
        if len(tp) != numCourses:
            return []
        for it in prerequisites:
            if tp.index(it[0]) > tp.index(it[1]):
                return []
        return tp[::-1]

        

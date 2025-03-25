class Solution(object):
    def findRedundantConnection(self, edges):
        n = len(edges)
        lab = [0] * (n + 2)
        res = -1
        
        def reset():
            for i in range(1, n + 1):
                lab[i] = i

        def check():
            for i in range(2, n + 1):
                if root(lab[i - 1]) != root(lab[i]):
                    return False
            return True
        def root(v):
            if v == lab[v]:
                return v
            else:
                lab[v] = root(lab[v])
                return lab[v]
        def merge(u, v):
            u = root(u)
            v = root(v)
            if u == v:
                return
            lab[v] = u

        for i in range(0, n):
            reset()
            for x in range(0, n):
                if x != i:
                    merge(edges[x][0], edges[x][1])
            if check() == True:
                res = i
        return edges[res]
        
                        


        

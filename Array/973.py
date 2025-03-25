class Solution(object):
    def kClosest(self, points, k):
        heap = []
        for x, y in points:
            heap.append((sqrt(x * x + y * y), x, y))
        heapify(heap)
        res = []
        for i in range(k):
            a, b, c = heappop(heap)
            res.append((b, c))
        return res
        
        

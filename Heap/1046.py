class Solution(object):
    def lastStoneWeight(self, stones):
        stones = [-ele for ele in stones]
        heapify(stones)
        while len(stones) > 1:
            r1 = -heappop(stones)
            r2 = -heappop(stones)
            if r1 != r2:
                heappush(stones, -abs(r1 - r2))
        if len(stones) > 0:
            return -stones[0]
        else:
            return 0

        

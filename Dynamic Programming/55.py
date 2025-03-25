class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)
        can = 0
        for i in range(n):
            if i > can:
                return False
            can = max(can, i + nums[i])
        return can >= n - 1
                
        

class Solution:
    def jump(self, nums: List[int]) -> int:
        n = len(nums)
        res = 0
        i = 0
        while i < n - 1:
            if i + nums[i] >= n - 1:
                res+=1
                break
            max_index = i + 1
            max_val = 0
            for j in range(i + 1,i + nums[i] + 1):
                if j + nums[j] > max_val:
                    max_index = j
                    max_val = j + nums[j]
            i = max_index
            res+=1
        return res
        

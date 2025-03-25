class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        def clc(arr):
            rob1, rob2 = 0, 0
            for n in arr:
                temp = max(n + rob1, rob2)
                rob1 = rob2
                rob2 = temp
            return rob2
        return max(clc(nums[1:len(nums)]), clc(nums[0:len(nums) - 1]))

        

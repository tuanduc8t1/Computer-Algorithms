class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        x = []
        def make(mem):
            if len(mem) == len(nums):
                x.append(mem.copy())
                return
            for i in nums:
                if i not in mem:
                    mem.append(i)
                    make(mem)
                    mem.pop()
        make([])
        return x

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        s = set(nums)
        if(int(len(s)) == int(len(nums))):
            return False
        else:
            return True
        

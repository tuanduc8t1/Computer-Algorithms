class KthLargest(object):

    def __init__(self, k, nums):
        self.k = k - 1
        self.arr = nums
        

    def add(self, val):
        self.arr.append(val)
        self.arr.sort()
        return self.arr[len(self.arr) - self.k - 1]
        


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)

class MyCircularDeque:

    def __init__(self, k: int):
        self.arr = []
        self.sz = k

    def insertFront(self, value: int) -> bool:
        if len(self.arr) < self.sz:
            self.arr.insert(0, value)
            return True
        return False

    def insertLast(self, value: int) -> bool:
        if len(self.arr) < self.sz:
            self.arr.append(value)
            return True
        return False
        

    def deleteFront(self) -> bool:
        if len(self.arr) > 0:
            self.arr.pop(0)
            return True
        return False
        

    def deleteLast(self) -> bool:
        if len(self.arr) > 0:
            self.arr.pop()
            return True
        return False

        

    def getFront(self) -> int:
        if len(self.arr) > 0:
            return self.arr[0]
        return -1
        

    def getRear(self) -> int:
        if len(self.arr) > 0:
            return self.arr[-1]
        return -1
        

    def isEmpty(self) -> bool:
        return len(self.arr) == 0
        

    def isFull(self) -> bool:
        return len(self.arr) == self.sz
        


# Your MyCircularDeque object will be instantiated and called as such:
# obj = MyCircularDeque(k)
# param_1 = obj.insertFront(value)
# param_2 = obj.insertLast(value)
# param_3 = obj.deleteFront()
# param_4 = obj.deleteLast()
# param_5 = obj.getFront()
# param_6 = obj.getRear()
# param_7 = obj.isEmpty()
# param_8 = obj.isFull()

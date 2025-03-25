class MyStack:
    def __init__(self):
        self.xy = []

    def push(self, x: int) -> None:
        self.xy.append(x)
        

    def pop(self) -> int:
        return self.xy.pop()
        

    def top(self) -> int:
        return self.xy[-1]
        

    def empty(self) -> bool:
        return len(self.xy) == 0
        


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()

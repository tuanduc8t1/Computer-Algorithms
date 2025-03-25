class DataStream:

    def __init__(self, value: int, k: int):
        self.arr = []
        self.vl = value
        self.num = k
        self.cnt = 0

    def consec(self, num: int) -> bool:
        self.arr.append(num)
        if num == self.vl:
            self.cnt += 1
        else:
            self.cnt = 0
        return self.cnt >= self.num
                
        


# Your DataStream object will be instantiated and called as such:
# obj = DataStream(value, k)
# param_1 = obj.consec(num)

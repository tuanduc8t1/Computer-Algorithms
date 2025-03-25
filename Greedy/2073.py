class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        xy = []
        tr = 0
        for i in range (len(tickets)):
            xy.append(i)
        while(len(xy) > 0):
            tickets[xy[0]] -= 1
            tr += 1
            if tickets[xy[0]] > 0:
                xy.append(xy[0])
            if tickets[k] == 0:
                return tr
            xy.pop(0)
        

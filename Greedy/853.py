class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        arr = [[pos, spd] for pos, spd in zip(position, speed)]
        st = []
        arr.sort(reverse = True)
        for pos, spd in arr:
            tg = (target - pos) / spd
            if(len(st) == 0 or st[-1] < tg):
                st.append(tg)
        return len(st)
        

class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        res = [0] * n
        st = []
        for i in range(n):
            while len(st) > 0 and temperatures[i] > temperatures[st[-1]]:
                idx = st[-1]
                st.pop()
                res[idx] = i - idx
            st.append(i)
        return res
        

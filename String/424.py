class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        res = 1
        i, j = 0, 0
        dt = {}
        mx = 0
        while j < len(s):
            dt[s[j]] = dt.get(s[j], 0) + 1
            mx = max(mx, dt[s[j]])
            while(j - i + 1 - mx > k):
                dt[s[i]] -= 1
                i += 1
            
            res = max(res, j - i + 1)
            j += 1
        return res
            

        

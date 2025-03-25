class Solution:
    def checkValidString(self, s: str) -> bool:
        n = len(s)
        l,r = 0,0
        for i in range(n):
            if s[i] == '(':
                l+=1
                r+=1
            elif s[i] == ')':
                l-=1
                r-=1
            else:
                l-=1
                r+=1
            if r < 0:
                return False
            l = max(l, 0)
        return l == 0
 

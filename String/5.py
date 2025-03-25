class Solution:
    def longestPalindrome(self, s: str) -> str:
        def findmax(left, right):
            while left >= 0 and right < len(s) and s[left] == s[right]:
                left -= 1
                right += 1
            return left + 1, right - 1
        st,end = 0,0
        for i in range(1,len(s)):
            l1,r1 = findmax(i,i)
            l2,r2 = findmax(i - 1,i)
            if r1 - l1 > end - st:
                st,end = l1,r1
            if r2 - l2 > end - st:
                st,end = l2,r2
        return s[st:end + 1:1]
            

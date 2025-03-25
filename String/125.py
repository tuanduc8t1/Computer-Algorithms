class Solution:
    def isPalindrome(self, s: str) -> bool:
        st = ""
        for ch in s:
            if(ch.isalpha() == True):
                st += ch.lower()
            elif(ch.isnumeric() == True):
                st += ch
        return True if st == st[::-1] else False
        

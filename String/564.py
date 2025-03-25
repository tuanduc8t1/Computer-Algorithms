class Solution:
    def nearestPalindromic(self, n: str) -> str:
        lg = len(n)
        half = lg // 2

        tmp = n[:half]
        print(tmp)
        s_1th = tmp + (n[half] if lg % 2 == 1 else "") + tmp[::-1]
        if lg <= 1:
            return str(int(n) - 1)
  
        z1 = str(int(tmp) - 1)
        z2 = str(int(tmp) + 1)

        s_2nd = z1 + (n[half] if lg % 2 == 1 else "") + z1[::-1]
        s_3rd = z2 + (n[half] if lg % 2 == 1 else "") + z2[::-1]
    

        s_4th, s_5th = "", "1"
        s_6th, s_7th = "", "1"
        for i in range(0, lg - 1):
            s_4th += '9'
            s_6th += '9'
        s_6th += '9'

        for i in range(1, lg - 1):
            s_5th += '0'
            s_7th += '0'
        s_5th += '1'
        s_7th += '0' + '1'



        dif = 1e9
        res = ""
        vec = []
        vec.append(int(s_1th))
        vec.append(int(s_2nd))
        vec.append(int(s_3rd))
        vec.append(int(s_4th))
        vec.append(int(s_5th))
        vec.append(int(s_6th))
        vec.append(int(s_7th))
        if lg % 2 == 1:
            if(n[half] != '0'):
                vec.append(int(tmp + str(int(n[half]) - 1) + tmp[::-1]))
            if(n[half] != '9'):
                vec.append(int(tmp + str(int(n[half]) + 1) + tmp[::-1]))
            
        vec.sort()
        for i in vec:
            if dif > abs(i - int(n)) > 0:
                dif = abs(i - int(n))
                res = i
        print(vec)
        return str(res)


            

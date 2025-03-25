class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dic={}
        res=[]
        lis=[]
        for i in nums:
            if i in dic:
                dic[i]+=1
            else:
                dic[i]=1
        for i in dic.values():
            lis.append(i)
        lis.sort(reverse = True)
        for i in lis[0:k:1]:
            for j in dic:
                if dic[j]==i and j not in res:
                    res.append(j)
        return res
        


        

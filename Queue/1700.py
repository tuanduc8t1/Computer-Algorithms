class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        i, j = 0, 0
        pq = []
        for x in students:
            pq.append(x)
        while(i < len(sandwiches) and j < len(pq)):
            if(sandwiches[i] == pq[0]):
                pq.pop(0)
                i+=1
                j = 0
            else:
                pq.append(pq[0])
                pq.pop(0)
                j+=1
        return len(pq)
                
        

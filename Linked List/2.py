# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ep1, val1 = 1, 0
        ep2, val2 = 1, 0
        while l1 != None:
            val1 += ep1 * l1.val
            ep1 *= 10
            l1 = l1.next
        while l2 != None:
            val2 += ep2 * l2.val
            ep2 *= 10
            l2 = l2.next

        val1 += val2
        if val1 == 0:
            return ListNode(0)
        res = ListNode(0)
        cur = res
        while val1 != 0:
            cur.next = ListNode(val1 % 10)
            val1 = val1 // 10
            cur = cur.next
        return res.next
            
        

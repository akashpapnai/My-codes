class ListNode:
    def __init__(self,val):
        self.next = None
        self.val = val
class Solution:
    def getIntersectionNode(self,headA,headB):
        if headA == None or headB == None:
            return None
        node1 = headA
        node2 = headB
        
        while node1 !=  node2:
            if node1==None:
                node1 = headB
            else:
                node1 = node1.next
            if node2==None:
                node2 = headA
            else:
                node2 = node2.next
        return node1

        
def traverselist(head):
    while(head):
        print(head.val,end=' ')
        head = head.next
    else:
        print()

common = ListNode(8)
common.next = ListNode(4)
common.next.next = ListNode(5)

headA = ListNode(4)
headA.next = ListNode(1)
headA.next.next = common


headB = ListNode(5)
headB.next = ListNode(6)
headB.next.next = ListNode(1)
headB.next.next.next = common

traverselist(headA)
traverselist(headB)

ans = Solution()
traverselist(ans.getIntersectionNode(headA,headB))
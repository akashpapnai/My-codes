class ListNode:
    def __init__(self,val):
        self.next = None
        self.val = val
class Solution:
    def reverselinkedlistrecursive(self,head):
        if head ==None or head.next == None:
            return head
        curr = self.reverselinkedlistrecursive(head.next)
        head.next.next = head
        head.next = None
        return curr
    def reverselinkedlistiterative(self,head):
        curr = head
        prev = None
        while curr!=None:
            next = curr.next
            curr.next = prev
            prev = curr
            curr= next
        return prev
        
def traverselist(head):
    while(head):
        print(head.val,end=' ')
        head = head.next
    else:
        print()


head = ListNode(1)
head.next = ListNode(2)
help = head.next.next = ListNode(3)
help.next = ListNode(4)
help.next.next = ListNode(5)
print('Question list: ',end=' ')
traverselist(head)

ans = Solution()
print("Answer recursively: ",end=' ')
traverselist(ans.reverselinkedlistrecursive(head))

head = ListNode(1)
head.next = ListNode(2)
help = head.next.next = ListNode(3)
help.next = ListNode(4)
help.next.next = ListNode(5)

print("Answer iteratively: ",end=' ')
traverselist(ans.reverselinkedlistiterative(head))
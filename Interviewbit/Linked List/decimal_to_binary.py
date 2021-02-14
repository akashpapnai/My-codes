class ListNode:
    def __init__(self,val):
        self.next = None
        self.val = val

def traverselist(head):
    curr=head
    while(curr):
        print(curr.val,end=' ')
        curr = curr.next
    else:
        print()


class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        val = 0
        while head:
            val=val*2+head.val
            head = head.next
        return val
        


head = ListNode(1)
head.next = ListNode(1)
help = head.next.next = ListNode(0)
help.next = ListNode(0)
help.next.next = ListNode(1)

print('Question list: ',end=' ')
traverselist(head)

ans = Solution()
print("Answer: ",end=' ')
print(ans.getDecimalValue(head))
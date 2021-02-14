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
    def isPalindromewithextraspace(self, head: ListNode) -> bool:
        lis =[]
        curr= head
        while curr:
            lis.append(curr.val)
            curr= curr.next
        i = 0
        j = len(lis)-1
        while i<j:
            if lis[i]!=lis[j]:
                return False
            i+=1
            j-=1
        return True
    def isPalindromewithoutextraspace(self, head: ListNode) -> bool:
        fast = slow = head
        while fast!=None and fast.next!=None:
            fast = fast.next.next
            slow = slow.next
        slow = self.reverse(slow)
        fast = head
        while(slow!=None):
            if slow.val!=fast.val:
                return False
            slow = slow.next
            fast = fast.next
        return True
    def reverse(self,head):
        prev = None
        while head!=None:
            next = head.next
            head.next = prev
            prev=head
            head =next
        return prev
        


head = ListNode(1)
head.next = ListNode(1)
help = head.next.next = ListNode(2)
help.next = ListNode(2)
help.next.next = ListNode(1)

print('Question list: ',end=' ')
traverselist(head)

ans = Solution()
print("Answer with some extra space: ",end=' ')
print(ans.isPalindromewithextraspace(head))

head = ListNode(1)
head.next = ListNode(1)
help = head.next.next = ListNode(2)
help.next = ListNode(2)
help.next.next = ListNode(1)

print("Answer with no extra space: ",end=' ')
print(ans.isPalindromewithoutextraspace(head))
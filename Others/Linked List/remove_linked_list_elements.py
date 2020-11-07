# Question : 1 1 2
# SOlution : 1 2
class List:
    def __init__(self,val):
        self.val = val
        self.next = None

class Solution:
    def removeval(self,head,val):
        while head and head.val == val:
            head = head.next
        curr = head
        prev = None
        while curr:
            next = curr.next
            if curr.val != val:
                prev = curr
                curr = curr.next
            else:
                prev.next = next
                curr = next
        return head

def traverselist(head):
    while head:
        print(head.val,end= ' ')
        head = head.next
    else:
        print()

a = List(1)
a.next = List(2)
help = a.next.next  = List(6)
help.next = List(3)
help2 = help.next.next = List(4)
help2.next = List(5)
help2.next.next = List(6)

val= 6
traverselist(a)
ans = Solution()
b = ans.removeval(a,val)
traverselist(b)
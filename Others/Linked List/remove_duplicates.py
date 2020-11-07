# Question : 1 1 2
# SOlution : 1 2
class List:
    def __init__(self,val):
        self.val = val
        self.next = None

class Solution:
    def removeduplicate(self,head):
        node = head
        if node == None:
            return head
        while node.next:
            #if not(node.next):
            #    return head
            if node.val == node.next.val:
                a= node
                a.next = a.next.next
            else:
                node = node.next
        return head

def traverselist(head):
    while head:
        print(head.val,end= ' ')
        head = head.next
    else:
        print()

a = List(1)
a.next = List(1)
help = a.next.next  = List(2)
help.next = List(3)
help.next.next = List(3)
traverselist(a)
ans = Solution()
b = ans.removeduplicate(a)
traverselist(b)
# Question : 1 6 3 5 6
# SOlution : 6 1 5 3 6
class List:
    def __init__(self,val):
        self.val = val
        self.next = None

class Solution:
    def swapPairs(self, head: List) -> List:
        temp = List(0)
        temp.next = head
        curr = temp
        while curr.next and curr.next.next:
            first = curr.next
            second = curr.next.next
            curr.next = second
            first.next = second.next
            curr.next.next = first
            curr = curr.next.next
        return temp.next

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

traverselist(a)
ans = Solution()
b = ans.swapPairs(a)
traverselist(b)
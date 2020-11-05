import math
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n<=0:
            return False
        a = math.log(n)/math.log(3)
        a = math.ceil(a)
        print(a)
        if pow(3,a)==n:
            return True
        else:
            return False
ans = Solution()
num = 243
print(ans.isPowerOfThree(num))
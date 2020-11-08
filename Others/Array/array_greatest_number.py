class Solution:
    def getMaximumGenerated(self, n: int) -> int:
        if n ==0:
            return 0
        if n==1:
            return 1
        num = [0 for _ in range(n+1)]
        num[0],num[1] = 0,1
        for i in range(1,n//2+1):
            if 2*i<=n:
                num[2*i] = num[i]
            if 2*i+1<=n:
                num[2*i+1] = num[i]+num[i+1]
        return max(num)
n = 3
ans = Solution()
print(ans.getMaximumGenerated(n))
class Solution:
    def titleToNumber(self, s: str) -> int:
        ans = 0
        for i in range(len(s)):
            ans+=(26**(len(s)-i-1))*(ord(s[i])-ord('A')+1)
        return ans
s='ABCA'
ans = Solution()
print(ans.titleToNumber(s))

class Solution:
    max_val= 2**31-1
    min_val = -2**31
    def myAtoi(self, s: str) -> int:
        if s == None or len(s)==0:
            return 0
        sign = 1
        i = 0
        n = len(s)
        while i<n and s[i]==' ':
            i+=1
        if i>=n:
            return 0
        if s[i]=='+' or s[i]=='-':
            sign = 1 if s[i] == '+' else -1
            i+=1
        res = 0
        while i<n and s[i].isdigit():
            res = res*10 +int(s[i])
            i+=1
            if res*sign>self.max_val or res*sign<self.min_val:
                return self.max_val if sign==1 else self.min_val
        return res*sign
            
s= '-4190 with words'
ans = Solution()
print(ans.myAtoi(s))
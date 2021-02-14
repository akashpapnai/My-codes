class Solution:
    def helper(self,res,s,opena,close,n):
        if len(s)==n*2:
            res.append(s)
            return
        if opena<n:
            self.helper(res,s+'(',opena+1,close,n)
        if close<opena:
            self.helper(res,s+')',opena,close+1,n)
    def generateParenthesis(self, n):
        res = []
        self.helper(res,'',0,0,n)
        return res
n = 6
ans =Solution()
print(*ans.generateParenthesis(n),sep='\n')
class Solution:
    def convert(self, s, numRows):
        ansarr = [[] for _ in range(numRows)]
        iter = [i for i in range(numRows)]
        iter.extend([i for i in range(numRows-2,0,-1)])
        i = 0
        while i<len(s):
            ansarr[iter[i%len(iter)]].append(s[i])
            i+=1
        res = ''
        for i in ansarr:
            res+=''.join(i)
        return res
s = 'PAYPALISHIRING'
numRows = 2
ans = Solution()
print(ans.convert(s,numRows))
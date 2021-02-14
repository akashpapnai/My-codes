class Solution:
    def letterCombinations(self, digits):
        if len(digits)==0:
            return []
        diglet = 'abc def ghi jkl mno pqrs tuv wxyz'.split(' ')
        if len(digits)==1:
            return list(diglet[int(digits[0])-2])
        res = []
        for i in range(len(digits)-1):
            lsa = list(diglet[int(digits[i])-2]) if len(res)==0 else res
            res = []
            lsb = list(diglet[int(digits[i+1])-2])
            for i in lsa:
                for j in lsb:
                    res.append(i+j)
        return res
ans =Solution()
digits = '23'
print(*ans.letterCombinations(digits))
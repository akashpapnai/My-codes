class Solution:
    def luckyNumbers (self, matrix):
        rowmin,colmax = [],{}
        ans = []
        for i in matrix:
            rowmin.append(min(i))
        for i in range(len(matrix[0])):
            temp = []
            for j in range(len(matrix)):
                temp.append(matrix[j][i])
            colmax[max(temp)] = 1
        for i in rowmin:
            if colmax.get(i):
                ans.append(i)
        return ans
matrix = [[3,7,8],[9,11,13],[15,16,17]]           
ob = Solution()
print(ob.luckyNumbers(matrix))
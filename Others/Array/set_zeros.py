class Solution:
    def setZeroes(self, matrix):
        """
        Do not return anything, modify matrix in-place instead.
        """
        if matrix == None or len(matrix)==0 or len(matrix[0])==0:
            return
        m,n = len(matrix),len(matrix[0])
        firstrowzero,firstcolzero = False, False
        for j in range(n):
            if matrix[0][j]==0:
                firstrowzero=True
                break
        for i in range(m):
            if matrix[i][0] == 0:
                firstcolzero = True
                break
        for i in range(1,m):
            for j in range(1,n):
                if matrix[i][j] == 0:
                    matrix[0][j] = 0
                    matrix[i][0] = 0
        for i in range(1,m):
            for j in range(1,n):
                if matrix[0][j] == 0 or matrix[i][0] == 0:
                    matrix[i][j] = 0
        if firstrowzero:
            for j in range(n):
                matrix[0][j] = 0
        if firstcolzero:
            for i in range(m):
                matrix[i][0] = 0


matrix = [[1,1,1],[1,0,1],[1,1,1]]
ob = Solution()
ob.setZeroes(matrix)
print(matrix)

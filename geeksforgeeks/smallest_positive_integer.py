# Problem statement: https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1/?track=SPC-Searching&batchId=135#
class Solution:
    def solve(self,A,n):
        one=0
        for i in range(n):
            if A[i]==1:
                one=1
                break
        if one==0:
            return 1
        for i in range(n):
            if A[i]<=0 or A[i]>n:
                A[i]=1
        for i in range(n):
            A[(A[i]-1)%n]+=n
        for i in range(n):
            if A[i]<=n:
                return i+1
        return n+1
arr = [1,2,3,4,5]
n= len(arr)
solve = Solution()
print(solve.solve(arr,n))
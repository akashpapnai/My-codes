# [1,2,-5]
# [7,8,9,10,11]
# [1,2,3,4,5]
# [1,3,-4,5]

class Solution:
    def firstMissingPositive(self, nums):
        if nums == None or len(nums)==0:
            return 1
        n,containsone = len(nums),False
        for i in range(len(nums)):
            if nums[i]==1:
                containsone =True
            elif nums[i]<=0 or nums[i]>n:
                nums[i] =1
        if containsone == False:
            return 1
        for i in range(n):
            b = abs(nums[i])-1
            if nums[b]>0:
                nums[b] = -1*nums[b]
        i=0
        print(*nums)
        while i<n:
            if nums[i]>0:
                return i+1
            i+=1
        return n+1
List = [3,4,-1,1]
ans = Solution()
print(ans.firstMissingPositive(List))
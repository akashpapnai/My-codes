class Solution:
    def productExceptSelf(self, nums):
        ans =[nums[0]]
        for i in range(1,len(nums)):
            ans.append(nums[i]*ans[i-1])

        n = len(ans)
        ans[n-1] = ans[n-2]
        product = nums[i]
        for i in range(n-2,-1,-1):
            if i != 0:
                ans[i] = ans[i-1]*product
                product*=nums[i]
            else:
                ans[i] = product
        return ans
nums = [1,2,3,4]
ob = Solution()
print(*ob.productExceptSelf(nums))
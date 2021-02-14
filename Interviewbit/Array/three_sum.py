class Solution:
    def threeSum(self, nums):
        nums.sort()
        ans = []
        i=0
        while(i<len(nums)):
            left = i+1
            right = len(nums)-1
            target = -nums[i]
            while(left<right):
                sum = nums[left]+nums[right]
                if sum<target:
                    left+=1
                elif sum>target:
                    right-=1
                else:
                    temp = []
                    temp.append(nums[i])
                    temp.append(nums[left])
                    temp.append(nums[right])
                    ans.append(temp)
                    
                    while left<right and nums[left]==temp[1]:
                        left+=1
                    while left<right and nums[right]==temp[2]:
                        right-=1
            while i+1<len(nums) and nums[i] == nums[i+1]:
                i+=1
            i+=1
        return ans
nums = [-1,0,1,2,-1,-4]
ob = Solution()
nums= ob.threeSum(nums)
print(*nums)
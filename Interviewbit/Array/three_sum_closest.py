class Solution:
    def threeSumClosest(self, nums, target):
        nums.sort()
        res = sum(nums[:3])
        for i in range(len(nums)-2):
            s = i+1
            e = len(nums)-1
            while s<e:
                sumhere = nums[i]+nums[s]+nums[e]
                if abs(sumhere-target)<abs(res-target):
                    res = sumhere
                if sumhere<target:
                    s+=1
                else:
                    e-=1
        return res


ans = Solution()
List,target = [-1,2,1,-4],1 
print(ans.threeSumClosest(List,target))
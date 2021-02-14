class Solution:
    def subarraySum(self, nums,k):
        dic={0:1}
        some=0
        count=0
        for i in nums:
            some+=i
            
            if dic.get(some-k):
                count+=dic[some-k]        
                
                
            if dic.get(some):
                dic[some]+=1
            else:
                dic[some]=1
        return count
nums = [1,1,1]
k = 2
ob = Solution()
print(ob.subarraySum(nums,k))
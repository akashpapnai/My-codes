def majorityElement(nums):
    majority,count = nums[0],1
    for i in range(1,len(nums)):
        count = count - 1 if majority!=nums[i] else count + 1
        if count  ==0:
            majority = nums[i] 
            count = 1
    return majority
lis = [2,2,1,1,1,2,2]
print(majorityElement(lis))
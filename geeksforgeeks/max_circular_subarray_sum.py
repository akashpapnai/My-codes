# Problem statement: https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1/?track=SPC-Arrays&batchId=135#

def circular_kadens(arr,N):
    if N==1:
        return arr[0]
    max_so_far,min_so_far,curr_max,curr_min,sumall = arr[0],arr[0],arr[0],arr[0],sum(arr)

    for i in range(1,N):
        curr_max = max(curr_max+arr[i],arr[i])
        max_so_far = max(curr_max,max_so_far)

        curr_min = min(curr_min+arr[i],arr[i])
        min_so_far = min(curr_min,min_so_far)

    if min_so_far==sumall:
        return max_so_far

    return max(max_so_far,sumall-min_so_far)

arr = [10,-3,-4,7,6,5,-4,-1]
N = 8
print(circular_kadens(arr,N))
#User function Template for python3

##Complete this function
def maxSubArraySum(a,size):
    curr_max,max_so_far = a[0],a[0]
    for i in range(1,size):
        curr_max = max(a[i],a[i]+curr_max)
        max_so_far = max(curr_max,max_so_far)
    return max_so_far



#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math

 
def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            
            print(maxSubArraySum(arr,n))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends
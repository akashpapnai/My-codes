#User function Template for python3
class Solution:
    def equilibrium(self,arr, n):
        lsum = sum(arr[:n-1])cal
        rsum = 0
        for i in range(n-1,-1,-1):
            point = arr[i]
            if lsum == rsum:
                return "YES"
            if i>0:
                lsum-=arr[i-1]
                rsum+=point
        return "NO"

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

	
	tc=int(input())
	while tc > 0:
	    n=int(input())
	    a=list(map(int , input().strip().split()))
	    ob = Solution()
	    ans=ob.equilibrium(a, n)
	    print(ans)
	    tc=tc-1
# } Driver Code Ends
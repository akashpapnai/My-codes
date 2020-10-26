#User function Template for python3

# arr[] : the input array
# N : size of the input array

# return the number of subarrays with equal 0s and 1s
def countSubarrWithEqualZeroAndOne(arr, N):
    dic = {}
    tsum,freq = 0,0
    for i in arr:
        tsum += -1 if i == 0 else i
        if (dic.get(tsum)):
            dic[tsum]+=1
        else:
            dic[tsum] = 1
    for i in dic:
        freq+=(dic[i]*(dic[i]-1))//2
        
    freq += dic[0] if dic.get(0) else 0
    return freq



#{ 
#  Driver Code Starts
#Initial Template for Python 3



def main():
    T=int(input())
    while(T>0):
        
        n=int(input())
        arr=[int(x) for x in input().strip().split()]
        
        
        print(countSubarrWithEqualZeroAndOne(arr, n))
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends
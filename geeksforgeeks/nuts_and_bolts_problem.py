#User function Template for python3
class Solution:

    def matchPairs(self,nuts, bolts, n):
        ans = []
        s ='!#$%&*@^~'
        dic = {}
        for i in nuts:
            if dic.get(i):
                dic[i]+=1
            else:
                dic[i]=1
        for i in s:
            if dic.get(i):
                dic[i]-=1
                ans.append(i)
        for i in range(len(ans)):
            nuts[i]=ans[i]
            bolts[i]= ans[i]



#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        nuts = list(map(str, input().strip().split()))
        bolts = list(map(str, input().strip().split()))
        ob = Solution()
        ob.matchPairs(nuts, bolts, n)
        print(*nuts)
        print(*bolts)
        tc -= 1

# } Driver Code Ends
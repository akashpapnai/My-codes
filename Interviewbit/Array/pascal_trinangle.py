def solve(A):
    res=[]
    temp=[]
    if(A==0):
        return res
    temp.append(1)
    res.append(temp)
    temp=[]
    if(A==1):
        return res
    for i in range(1,A):
        for j in range(i+1):
            a,b=0,0
            a = 0 if j-1<0 else res[i-1][j-1]
            b = 0 if j==i else res[i-1][j]
            temp.append(a+b)
        res.append(temp)
        temp=[]
    return res

a = int(input())
res = solve(a)
print(*res,sep='\n')
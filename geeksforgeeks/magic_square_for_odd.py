n = 5
magic = [[0 for _ in range(n)]for _ in range(n)]
i,j = n//2,n-1
num = 1
while num<=n**2:
    if i==-1 and j==n:
        i=0
        j = n-2
    else:
        if i <0:
            i = n-1
        if j==n:
            j=0
    if magic[i][j]:
        i+=1
        j-=2
        continue
    else:
        magic[i][j]=num
        num+=1
    i-=1
    j+=1
print(*magic,sep = '\n')
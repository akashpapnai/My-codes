def kWeakestRows(mat, k):
    dic = {}
    for i in range(len(mat)):
        count = 0
        for j in range(len(mat[0])):
            if mat[i][j]==1:
                count+=1
        dic[i]=count
    dic = {k: v for k, v in sorted(dic.items(), key=lambda item: item[1])}
    return list(dic.keys())[:k]

lis = [[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]]
k = 3
print(*kWeakestRows(lis,k))
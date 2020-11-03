def relativeSortArray(arr1, arr2):
    dic = {}
    ans = []
    for i in arr1:
        dic[i] = dic[i]+1 if dic.get(i) else 1
    for i in arr2:
        if dic.get(i):
            while(dic[i]):
                ans.append(i)
                dic[i]-=1
            continue
    print(dic)
    sorted(dic.items())
    print(dic)
    for itr in dic:
        while(dic[itr]):
            ans.append(itr)
            dic[itr]-=1
    return ans
arr1 = [28,6,22,8,44,17]
arr2 = [22,28,8,6]
print(*relativeSortArray(arr1,arr2))

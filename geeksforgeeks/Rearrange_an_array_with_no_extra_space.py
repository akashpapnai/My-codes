def arrange(arr,n):
    for i in range(len(arr)):
        arr[i] += (arr[arr[i]]%n)*n
    for i in range(len(arr)):
        arr[i] //= n


arr = [4,0,2,1,3]
n = 5
arrange(arr,n)
print(*arr)
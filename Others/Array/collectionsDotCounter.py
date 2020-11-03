from collections import Counter
garb = int(input())
shoes = Counter(map(int,input().split(' ')))

ans = 0
c = int(input())
for i in range(c):
    a,b = map(int,input().split(' '))
    if shoes[a]:
        ans += b
        shoes[a] -= 1
print(ans)
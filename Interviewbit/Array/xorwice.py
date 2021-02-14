t = int(input())
while t:
    a,b = [int(i) for i in input().split(' ')]
    m = 100000000000007
    x = a | b
    print((a^x)+(b^x))
    t-=1
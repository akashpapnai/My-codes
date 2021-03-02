# Problem Statement: https://www.interviewbit.com/problems/compare-version-numbers/

def compareversion(A,B):
    a = A.split('.')
    b = B.split('.')

    a = [int(i) for i in a]
    b = [int(i) for i in b]

    if len(a)>len(b):
        for _ in range(len(a)-len(b)):
            b.append(0)
    elif len(b)>len(a):
        for _ in range(len(b)-len(a)):
            a.append(0)

    for i in range(len(a)):
        if a[i]>b[i]:
            return 1
        elif b[i]>a[i]:
            return -1
    return 0

ver1 = '18.0'
ver2 = '18'
print(compareversion(ver1,ver2))
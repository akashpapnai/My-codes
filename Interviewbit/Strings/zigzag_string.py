# Problem Statement: https://www.interviewbit.com/problems/zigzag-string/
def convert(A, B):
    if len(A)==1 or len(A)==2 or B==1:
        return A
    ans=""
    res=[[] for _ in range(B)]
    num = []
    for i in range(B):
        num.append(i)
    for i in range(B-2,0,-1):
        num.append(i)
    i=0
    while i<len(A):
        res[num[i%(2*B-2)]].append(A[i])
        i+=1
    for i in range(len(res)):
        for j in range(len(res[i])):
            ans+=res[i][j]
    return ans

print(convert('PAYPALISHIRING',3))
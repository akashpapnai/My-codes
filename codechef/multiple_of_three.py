"""

Consider a very long K-digit number N with digits d0, d1, ..., dK-1 (in decimal notation; d0 is the most significant and dK-1 the least significant digit). This number is so large that we can't give it to you on the input explicitly; instead, you are only given its starting digits and a way to construct the remainder of the number.
Specifically, you are given d0 and d1; for each i ≥ 2, di is the sum of all preceding (more significant) digits, modulo 10 — more formally, the following formula must hold: 
Determine if N is a multiple of 3.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers K, d0 and d1.
Output
For each test case, print a single line containing the string "YES" (without quotes) if the number N is a multiple of 3 or "NO" (without quotes) otherwise.

Constraints
1 ≤ T ≤ 1000
2 ≤ K ≤ 1012
1 ≤ d0 ≤ 9
0 ≤ d1 ≤ 9


Example
Input:
3
5 3 4
13 8 1
760399384224 5 1
Output:
NO
YES
YES


Explanation
Example case 1: The whole number N is 34748, which is not divisible by 3, so the answer is NO.
Example case 2: The whole number N is 8198624862486, which is divisible by 3, so the answer is YES.

"""

def check_multiple_of_three(k, d0, d1):
    if k == 2:
        return not ((d0 + d1) % 3)
    sum_of_digits = d0 + d1 + ((d0 + d1) % 10)
    if k > 3:
        a = ((d0 + d1) << 1) % 10
        b = ((d0 + d1) << 2) % 10
        c = ((d0 + d1) << 3) % 10
        d = (6 * (d0 + d1)) % 10
        sum_of_digits += ((a + b + c + d) * ((k - 3) >> 2))
        if(k - 3) % 4 == 1:
            sum_of_digits += a
        elif (k - 3) % 4 == 2:
            sum_of_digits += (a + b)
        elif (k - 3) % 4 == 3:
            sum_of_digits += (a + b + c)
    return not sum_of_digits % 3

for test in range(int(input().strip())):
    k, d0, d1 = tuple(map(int, input().strip().split()))
    print("{0}".format("YES" if check_multiple_of_three(k, d0, d1) else "NO"))

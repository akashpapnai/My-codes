# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.
def multiples_of_3_or_5_below(num):
    sum = 0
    num-=1
    tot = num//3
    sum += 3*tot*(tot+1)//2
    tot = num//5
    sum += 5*tot*(tot+1)//2
    tot = num//15
    sum -= 15*tot*(tot+1)//2
    return sum
num = 1000
print(multiples_of_3_or_5_below(num))
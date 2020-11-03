# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.
def even_fib(num):
    sum = 0
    fib_0 = 1
    fib_1 = 2
    fib = 0
    while(fib<=4000000):
        fib = fib_0 + fib_1
        if fib%2==0:
            sum+=fib
        fib_0 = fib_1
        fib_1 = fib
    return sum
num = 1000
print(even_fib(num)+2)
class Solution:
    def countPrimes(self, n: int) -> int:
        primes=[True for _ in range(n)]
        i = 2
        while i<len(primes):
            if i*i<len(primes):
                if primes[i]:
                    j = i
                    while j<len(primes):
                        if j*i<len(primes):
                            primes[i*j]=False
                        else:
                            break
                        j+=1
            else:
                break
            i+=1
        primescount = sum(primes[2:])
        return primescount
n = 150000
ans = Solution()
print(ans.countPrimes(n))
/*
Binary Exponentiation is a trick which allows to calculate a^n in log(n) time.

Algo:

a^n = [ 1                    when n==0                ]
      [ (a^(n/2))^2          when n>0 and n is even   ]
      [ (a^((n-1)/2))^2*a    otherwise                ]

*/

#include<bits/stdc++.h>
using namespace std;

long long power(long long a, long long b) {
   return (b==0)? 1 : (b==1)? a : (b==2)? a*a :
         (b%2==0)? power(power(a,b/2),2) : 
                   power(power(a,(b-1)/2),2)*a;
}

int main() {
   cout<<power(3,13)<<endl;
}
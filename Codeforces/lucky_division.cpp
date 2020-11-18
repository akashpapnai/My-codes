// Problem statement : http://codeforces.com/problemset/problem/122/A

#include <iostream>
#include<cstring>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int divisor[] = {4,7,47,74,447,474,477};
    for(int i=0;i<sizeof(divisor)/sizeof(divisor[0]);i++) {
        if(t%divisor[i]==0) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

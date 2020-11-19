// Problem Statement: https://codeforces.com/problemset/problem/318/A
#include<iostream>
#include<stdint.h>
using namespace std;
int main() {
    int64_t n,k;
    cin>>n>>k;
    if(k>(n+1)/2) {
        //even
        cout<<2*((k)-(n+1)/2);
    }
    else {
        //odd
        cout<<2*k-1;
    }
}
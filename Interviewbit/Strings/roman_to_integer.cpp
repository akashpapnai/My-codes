// Problem Statement: https://www.interviewbit.com/problems/roman-to-integer/
#include <bits/stdc++.h>
using namespace std; 
int getint(char s) {
    if(s=='I') return 1;
    if(s=='V') return 5;
    if(s=='X') return 10;
    if(s=='L') return 50;
    if(s=='C') return 100;
    if(s=='D') return 500;
    if(s=='M') return 1000;
    return 0;
}
int solve(string A) {
    int ans=0;
    for(int i=0;i<A.size()-1;i++) {
        if(getint(A[i])<getint(A[i+1])) {
            ans-=getint(A[i]);
        }
        else ans+=getint(A[i]);
    }
    ans+=getint(A[A.size()-1]);
    return ans;
}

int main() 
{ 
    string q = "MMCMCXIV";
    cout<<solve(q);
} 
// Problem statement: https://www.interviewbit.com/problems/remove-consecutive-characters/
#include<bits/stdc++.h>
using namespace std;
string solve(string A,int B) {
    //aabbccd aaaabbccd
    int same=1;
    string ans;
    for (int i=1;i<A.size();i++) {
        if(A[i]==A[i-1]) {
            same++;
        }
        else {
            if(same<B) {
                ans+=A[i-1];
            }
            same=1;
        }
    }
    if(same<B) {
        ans+=A[A.size()-1];
    }
    return ans;
}
int main() {
    string A="aaaabbccd";
    int B=2;
    cout<<solve(A,B)<<endl;
}
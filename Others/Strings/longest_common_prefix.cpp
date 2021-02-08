// Problem statement: https://www.interviewbit.com/problems/longest-common-prefix/
#include<bits/stdc++.h>
using namespace std;
string solve(vector<string> &A) {
    string res;
    for(int i=0;i<A[0].size();i++) {
        char s = A[0][i];
        int flag=0;
        for(int j=0;j<A.size();j++) {
            if(A[j][i]==s) {
                flag=1;
            }
            else {
                flag=0;
                break;
            }
        }
        if (flag==0) {
            break;
        }
        else res+=s;
    }
    return res;
}


int main() {
    vector<string>A = {"abab", "ab", "abcd"};
    cout<<solve(A)<<endl;
}
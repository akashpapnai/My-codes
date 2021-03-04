// Problem Statement: https://www.interviewbit.com/problems/minimum-parantheses/
#include <bits/stdc++.h>
using namespace std; 
int solve(string A) {
    int ob=0,req=0;
    for(int i=0;i<A.size();i++) {
        if(A[i]=='(') {
            ob++;
        }
        else {
            if(ob>0) {
                ob--;
            }
            else req++;
        }
    }
    return req+ob;
}

int main() 
{ 
    string A = "))))(";
    cout<<solve(A);
} 
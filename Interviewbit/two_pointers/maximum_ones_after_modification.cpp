// Problem Statement: https://www.interviewbit.com/problems/maximum-ones-after-modification/
#include <bits/stdc++.h>
using namespace std; 
int solve(vector<int> &A, int B) {
    int ws=0,zc=0,w=0;
    for(int we=0;we<A.size();we++) {
        if(A[we]==0) {
            zc++;
        }
        while(zc>B) {
            if(A[ws]==0) {
                zc--;
            }
            ws++;
        }
        if(we-ws+1>w) {
            w=we-ws+1;
        }
    }
    return w;
}



// Driver code 
int main() 
{ 
    vector<int> A = {1, 0, 0, 1, 0, 1, 0, 1, 0, 1};
    int B=2;
    cout<<solve(A,B)<<endl;
} 

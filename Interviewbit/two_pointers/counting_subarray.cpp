// Problem Statement: https://www.interviewbit.com/problems/counting-subarrays/
#include <bits/stdc++.h>
using namespace std; 
int solve(vector<int> &A, int B) {
    // [1, 11, 2, 3, 15] , 10

    int ws=0,i=0,res=0,sum=0;
    while(i<A.size() and ws<A.size()) {
        if(sum+A[i]<B) {
            sum+=A[i];
            res+=(i-ws+1);
            i++;
        }
        else {
            sum-=A[ws];
            ws++;
        }
    }
    return res;
}



// Driver code 
int main() 
{ 
    vector<int> A = {1, 11, 2, 3, 15};
    int B=10;
    cout<<solve(A,B)<<endl;
} 

// Problem Statement: https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/
#include <bits/stdc++.h>
using namespace std; 
int solve(vector<int> &A) {
    // [0, 0, 1, 1, 2, 2, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3]
    if(A.size()<=2) return A.size();
    int left=2;
    for(int i=2;i<A.size();i++) {
        if(A[left-2]!=A[i]) {
            A[left++] = A[i];
        }
    }
    return left;
}



// Driver code 
int main() 
{ 
    vector<int> A = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int res=solve(A);
    for(int i=0;i<res;i++) {
        cout<<A[i]<<' ';
    }
    cout<<endl;
} 

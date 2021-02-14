// Problem Statement: https://www.interviewbit.com/problems/pair-with-given-difference/
#include <bits/stdc++.h>
using namespace std; 
int solve(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    B = abs(B);
    int i = 0;
    int j = 1;
    while (j<A.size()) {
        if (A[j]-A[i]-B == 0)
            return 1;
        else if (A[j]-A[i]-B>0) {
            i+=1;
            if (i==j)
                j+=1;
        }
        else{
            j+=1;
        }
    }
    cout<<i<<j<<endl;
    return 0;
}


// Driver code 
int main() 
{ 
    vector<int> A = { -259, -825, 459, 825, 221, 870, 626, 934, 205, 783, 850, 398};
    int B=-42;
    cout<<solve(A,B);
} 

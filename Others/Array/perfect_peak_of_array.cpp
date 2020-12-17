// Problem statement: https://www.interviewbit.com/problems/perfect-peak-of-array/
#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<int>&A) {
    vector<int>left(A.size()),right(A.size());
    left[0] = A[0];
    right[A.size()-1] = A[A.size()-1];
    for(int i=1;i<A.size();i++) {
        left[i] = max(left[i-1],A[i]);
    }
    for(int i=A.size()-2;i>=0;i--) {
        right[i] = min(right[i+1],A[i]);
    }
    for(int i=1;i<A.size()-1;i++) {
        if(left[i-1]<A[i] and right[i+1]>A[i]) return true;
    }
    return false;
}
// defining compare function for sort
int main() {
    vector<int> arr = {5,1,4,3,6,8,10,7,9};
    solve(arr)?cout<<"YES\n":cout<<"NO\n";
}

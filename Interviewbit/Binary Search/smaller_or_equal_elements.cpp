// Problem statement: https://www.interviewbit.com/problems/smaller-or-equal-elements/
#include<bits/stdc++.h>
using namespace std;

int solve(int* arr, int n, int m) {
    int start=0;
    int end=n;
    int mid=0;
    while(start<=end) {
        mid=start+(end-start)/2;
        
        (arr[mid]>m)?end=mid-1:start=mid+1;

    }
    return min(n,mid+(arr[mid]<=m));
}

int main() {
    int brr[] = {1,3,4,4,6,8,10,12,16};
    int m = sizeof(brr)/sizeof(brr[0]);
    int n = 4;
    cout<<solve(brr,m,n);
}
//6
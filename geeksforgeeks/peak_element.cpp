// Problem statement: https://practice.geeksforgeeks.org/problems/peak-element/1/?track=SPC-Searching&batchId=135
#include<bits/stdc++.h>
using namespace std;
int recursive(int a[], int left, int right, int n) {
    int mid = (left+(right-left)/2);

    if((mid==0 or a[mid-1]<=a[mid]) and (mid==n-1 or a[mid+1]<=a[mid])) return mid;

    else if (mid>0 and a[mid-1]>a[mid]) return recursive(a,left,mid-1,n);

    else return recursive(a,mid+1,right,n);
}
int peak_element(int a[],int size) {
    return recursive(a,0,size-1,size);
}
int main() {
    int N = 4;
    int A[] = {5,10,15,20};
    cout<<peak_element(A,N)<<endl;
}
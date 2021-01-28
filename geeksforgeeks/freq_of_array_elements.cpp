// Problem statement : https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0/?track=SPC-Arrays&batchId=135#

#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,int n) {

    for(int i=0;i<n;i++) arr[i]--;

    for(int i=0;i<n;i++) arr[arr[i]%n] = arr[arr[i]%n]+n;

    for(int i=0;i<n;i++) arr[i]/=n;

}
int main() {
    int n = 5;
    vector<int>A = {2,3,2,5,3};
    solve(A,n);
    for(int i=0;i<n;i++) cout<<A[i]<<' '; 
    cout<<endl;
}
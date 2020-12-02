//Problem statement: https://www.interviewbit.com/problems/maximum-sum-triplet/
#include<iostream>
#include<set>
#include<climits>
using namespace std;
int getlowerbound(set<int>&left,int n){
    auto it = left.lower_bound(n);
    --it;
    return *it;
}
int maximumsumtriplet(int *arr,int n) {
    int right[n];
    right[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--) right[i] = max(arr[i],right[i+1]);
    set<int>left;
    left.insert(INT_MIN);
    int ans = 0;
    for(int i=0;i<n-1;i++) {
        ans = max(ans,arr[i]+getlowerbound(left,arr[i])+right[i+1]);
        left.insert(arr[i]);
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<maximumsumtriplet(arr,n)<<endl;
}
// Problem statement: https://leetcode.com/problems/next-permutation
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void next_permutation(vector<int>&arr) {
    int k = -1,l;
    for(int i=0;i<arr.size()-1;i++) {
        if(arr[i]<arr[i+1]) k = i;
    }
    if(k==-1){
        sort(arr.begin(),arr.end());
        return;
    }
    for(int i=k+1;i<arr.size();i++) {
        if(arr[i]>arr[k]) l = i;
    }
    swap(arr[k],arr[l]);
    reverse(arr.begin()+k+1,arr.end());
}
int main() {
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    next_permutation(arr);
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<' ';
    cout<<endl;
}
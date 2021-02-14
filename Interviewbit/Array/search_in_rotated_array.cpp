//Problem Statement: https://leetcode.com/problems/search-in-rotated-sorted-array/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int search(vector<int>&arr, int target) {
    int n = arr.size();
    int mid,left = 0,right = n-1;
    while(left<=right) {
        mid = left+(right-left)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>=arr[left]) {
            if(target>=arr[left] and target<=arr[mid]) {
                right = mid-1;
            }
            else left = mid+1;
        }
        else {
            if(target>=arr[mid] and target<=arr[right]) {
                left = mid+1;
            }
            else right = mid-1;
        }
    } 
    return -1;
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
    int target;
    cin>>target;
    cout<<search(arr,target);
    cout<<endl;
}
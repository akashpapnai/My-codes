#include<bits/stdc++.h>
#define scan(x) {for(auto &i:x) cin>>i;}
using namespace std;

int solveutil(vector<int>&arr, int start, int end, int search) {
   while(start<=end) {
      int mid=start+(end-start)/2;
      if(arr[mid]==search) {
         return mid;
      }
      else if(search>arr[mid]) {
         start = mid+1;
      }
      else {
         end=mid-1;
      }
   }
   return -1;
}

int binary_search(vector<int>&arr, int s) {
   return solveutil(arr,0,arr.size()-1,s);
}

int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

   int n; cin>>n;
   vector<int>arr(n); scan(arr);
   int s; cin>>s;
   cout<<binary_search(arr,s)<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int LIS(vector<int>&arr) {
   vector<int>dp(arr.size(),1);
   for(auto i:arr)cout<<i<<" ";cout<<endl;
   int i=1,j=0;
   while(i<arr.size()) {
      while(j<i) {
         if(arr[j]<arr[i]) {
            dp[i] = max(dp[i],dp[j]+1);
         }
         j++;
      }
      j=0;
      i++;
   }
   for(auto i:dp)cout<<i<<" ";cout<<endl;
   return dp[arr.size()-1];
}
int main() {
   vector<int>arr{10,22,9,33,21,50,41,60,80};
   cout<<LIS(arr);
}
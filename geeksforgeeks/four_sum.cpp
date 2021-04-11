// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        // Your code goes here
        vector<vector<int>> result;
 
    if(nums.size()<4) return result;
 
    sort(nums.begin(),nums.end());
    int n = nums.size();
 
    for(int i=0; i<n-3; i++){
        if(i!=0 && nums[i]==nums[i-1])
            continue;
        for(int j=i+1; j<n-2; j++){
            if(j!=i+1 && nums[j]==nums[j-1])
                continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                if(nums[i]+nums[j]+nums[k]+nums[l]<target){
                    k++;
                }else if(nums[i]+nums[j]+nums[k]+nums[l]>target){
                    l--;
                }else{
                    vector<int> t = {nums[i],nums[j],nums[k],nums[l]};
                    result.push_back(t);
 
                    k++;
                    l--;
 
                    while(k<l &&nums[l]==nums[l+1] ){
                        l--;
                    }
 
                    while(k<l &&nums[k]==nums[k-1]){
                        k++;
                    }
                }
 
 
            }
        }
    }
 
    return result;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
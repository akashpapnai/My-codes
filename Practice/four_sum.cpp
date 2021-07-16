#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> foursum(vector<int>&A, int target) {
    vector<vector<int>>ans;
    unordered_map<string,int>umap;
    if(A.size()<4) return ans;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-3;i++) {
        for(int j=i+1;j<A.size()-2;j++) {
            int curr_sum = A[i]+A[j];
            int k=j+1,l=A.size()-1;
            while(k<l) {
                if(curr_sum+A[k]+A[l]==target) {
                    string temp = to_string(A[i]) + to_string(A[j]) + to_string(A[k]) + to_string(A[l]);
                    if(not umap.contains(temp)) {
                        ans.push_back({A[i],A[j],A[k],A[l]}); 
                        umap[temp]++;
                    }
                    k++;
                    l--;
                }
                else if(curr_sum+A[k]+A[l]>target) l--;
                else k++;
            }
        }
    }
    return ans;
}

int main() {
    vector<int>A{-3,-2,-1,0,0,1,2,3};
    int target = 0;
    vector<vector<int>>ans = foursum(A,target);
    for(auto i:ans) {for(auto j:i) cout<<j<<" "; cout<<endl;}
}
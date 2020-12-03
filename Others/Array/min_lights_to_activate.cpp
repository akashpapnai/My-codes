// Problem statement: https://www.interviewbit.com/problems/minimum-lights-to-activate/
#include<iostream>
#include<vector>
using namespace std;
int minimumlights(vector<int>&A,int B){
    int ans=0;
    int n = A.size();
    for(int i=0;i<n;i++) {
        int flag= 0;
        for(int j = i+B-1;j>=i-B+1;j--){
            if(A[i]==1) {
                ans++;
                flag=1;
                i = j+B-1;
                break;
            }
        }
        if(flag==0) return -1;
    }
    return ans;
}
int main() {
    vector<int>A={0,0,0,1,0};
    int B = 3;
    cout<<minimumlights(A,B)<<endl;
}

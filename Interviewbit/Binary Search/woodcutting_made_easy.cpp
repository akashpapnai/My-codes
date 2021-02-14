// Problem statement: https://www.interviewbit.com/problems/woodcutting-made-easy/
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> A, int B) {
    // 20 15 10 17
    // 7
    int ans=0;
    int maxi=0;
    int mini=0;

    for(int i=0;i<A.size();i++) {
        maxi = max(maxi,A[i]);
    }
    // maxi = 20
    while(maxi>=mini) {
        int mid = mini+(maxi-mini)/2;
        long wood = 0;
        for(int i=0;i<A.size();i++) {
            if(A[i]-mid>0) {
                wood+=A[i]-mid;
            }
        }
        if(wood>=(long)B) {
            mini = mid+1;
            ans = max(ans,mid);
        }
        else {
            maxi = mid-1;
        }
    }
    return ans;
}


int main() {
    vector<int>A = {20,15,10,17};
    int B=7;
    cout<<solve(A,B)<<endl;
}
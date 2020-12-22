// Problem statement: https://www.interviewbit.com/problems/maximum-unsorted-subarray/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> subUnsort(vector<int> &A) {
    // step 1
    int n = A.size();
    int s=-1,e=-1;
    for(int i=0;i<n-1;i++) {
        if(A[i]>A[i+1]) {
            s=i;
            break;
        }
    }
    vector<int>ans;
    if(s==-1) {
        ans.push_back(-1);
        return ans;
    }
    for(int i=n-1;i>0;i--) {
        if(A[i]<A[i-1]) {
            e=i;
            break;
        }
    }
    // step 2
    int maxima=A[s],minima = A[s];
    for(int i=s+1;i<=e;i++) {
        maxima = max(A[i],maxima);
        minima = min(A[i],minima);
    }
    for(int i=0;i<s;i++) {
        if(A[i]>minima) {
            s=i;
            break;
        }
    }
    for(int i=n-1;i>e;i--) {
        if(A[i]<maxima) {
            e=i;
            break;
        }
    }
    //step 3
    ans.push_back(s);
    ans.push_back(e);
    return ans;
}
int main() {
    vector<int>A = {4, 15, 4, 4, 15, 18, 20};
    vector<int>ans = subUnsort(A);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
    cout<<endl;
}
// Problem statement: https://www.interviewbit.com/problems/wave-array/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>wave(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    for(int i=1;i<n;i+=2){
        swap(A[i],A[i-1]);
    }
    return A;
}

int main() {
    int B=3;
    vector<int> A = {1,2,3,4,5};
    vector<int>sol = wave(A);
    for(int i=0;i<sol.size();i++) {
        cout<<sol[i]<<' ';
    }
    cout<<endl;
}
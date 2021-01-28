// Problem statement - https://www.interviewbit.com/problems/balance-array/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int solve(vector<int>&A) {
    int n = A.size();
    int even = 0;
    int odd = 0;
    int i = 0;
    while (i<n) {
        if (i%2==0)
            odd += A[i];
        else
            even += A[i];
        i += 1;
    }
    int ans = 0;     
    int x = 0;
    int y = 0;
    i = 0;
    while (i<n){
        if (i%2==0)
            odd -= A[i];
        else
            even -= A[i];
            
        if (odd+x==even+y)
            ans += 1;
        if (i%2==0)
            y += A[i];
        else
            x += A[i];
        i += 1;
    }
    return ans;
    }
int main() {
    vector<int>A = { 5, 5, 2, 5, 8 };
    int ans = solve(A);
    cout<<ans;
    cout<<endl;
}
// Problem statement: https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/
#include<iostream>
#include<vector>
using namespace std;
// [3C0 3C1 3C2 3C3]
// 3C2 = 3C1 *(2)/2
// 3C3 = 3C2 *(1)/3
vector<int> pascalrow(int n) {
    vector<int>ans(n+1,1);
    if(n>=1) {
        ans[1] = n;
    }
    for(int i=2;i<=n;i++) {
        ans[i] = ans[i-1]*(n-i+1)/i; 
    }
    return ans;
}
int main() {
    int b;
    b=3;
    vector<int> sol = pascalrow(b);
    for(int i=0;i<sol.size();i++) {
            cout<<sol[i]<<' ';
        }
    cout<<endl;
}
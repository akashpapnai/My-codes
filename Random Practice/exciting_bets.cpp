// Problem: https://codeforces.com/problemset/problem/1543/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
    public:
    void solve() {
        ll x,y; cin>>x>>y;
        ll diff=abs(x-y);
        diff==0?cout<<"0 0\n" : cout<<diff<<" "<<min(x%diff,diff-y%diff)<<endl;
    }

    private:

};

int main() {
    int t; cin>>t;
    while(t--) {
        Solution s;
        s.solve();
    }
}
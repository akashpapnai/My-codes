// Problem: https://codeforces.com/problemset/problem/1537/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
    public:
    void solve() {
        ll ans=0;
        ll n; cin>>n;
        for(int i=0;i<n;i++) {
            ll x; cin>>x;
            ans+=x;
        }
        cout<<(ans<n?1:ans-n)<<endl;
    }

    private:
    ll x,y;
};

int main() {
    int t; cin>>t;
    while(t--) {
        Solution s;
        s.solve();
    }
}
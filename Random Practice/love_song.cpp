#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
    string str;
    ll n;
    vector<ll>presum;
    public:
    Solution(string &str, ll n) : str(str), n(n) {
        vector<ll>presum(n);

        for(int i=0;i<n;i++) presum[i] = str[i]-'a'+1;
        for(int i=1;i<n;i++) presum[i] += presum[i-1];
        this->presum = presum;
    }
    void solve() {
        ll s,e; cin>>s>>e;
        
        cout<<presum[e-1]-(s-2>=0?presum[s-2]:0)<<endl;
    }
};

int main() {
    int n,t; cin>>n>>t;
    string str; cin>>str;
    Solution s(str,n);
    while(t--) {
        s.solve();
    }
}
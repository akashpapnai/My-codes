#include<bits/stdc++.h>
#define send {ios::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
using namespace std;
typedef long long ll;

class Solution {
    const int mod = 1e9+7;
    const ll mxn = 1e3+5;
    
    public:
    void shoe_fit() {
        int a,b,c; cin>>a>>b>>c;
        cout<<((a!=b or b!=c or c!=a)?1:0)<<endl;
    }
    void chef_and_gcd() {
        int x,y; cin>>x>>y;
        cout<<(__gcd(x,y)>1?0:(__gcd(x+1,y)>1 or __gcd(x,y+1)>1)?1:2)<<endl;
    }
    void chef_in_infinite_plane() {
        unordered_map<ll,ll>umap;
        int n; cin>>n;
        for(int i=0;i<n;i++) {
            int x;cin>>x;
            umap[x]++;
        }
        ll ans=0;
        for(auto [x,y]:umap) {
            ans+=min(x-1,y);
        }
        cout<<ans<<endl;
    }
    void xored() {
        int n; cin>>n;
        ll ans=0;
        ll y;
        for(int i=0;i<n;i++) {
            int x; cin>>x;
            if(i==0) y = x;
            ans |= (y^x);
        }
        cout<<y<<" "<<ans<<endl;
    }
    void mod_equality() {
        // n , n-count;
        ll n; cin>>n;
        ll arr[n];
        for(auto &x:arr) cin>>x;
        ll min_ele = *min_element(arr,arr+n);
        for(auto i:arr) {
            if(i==min_ele) continue;
            else if(i<=2*min_ele) {
                cout<<n<<endl;
                return;
            }
        }
        cout<<n-count(arr,arr+n,min_ele)<<endl;
    }
};

int main() {
    int t; cin>>t;
    while(t--) {
        Solution s;
        s.mod_equality();
    }
}
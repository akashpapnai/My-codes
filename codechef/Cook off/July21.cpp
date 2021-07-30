#include<bits/stdc++.h>
#define send {ios::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
using namespace std;
typedef long long ll;
class Solution {
    const int mod = 1e9+7;
    const ll mxn = 1e3+5;
    public:
    void chef_and_gcd() {
        int a,b; cin>>a>>b;
        cout<<((__gcd(a,b)>1)?0:(__gcd(a+1,b)>1 or __gcd(a,b+1)>1)?1:2)<<endl;
    }
    void chef_in_infinite_plane() {
        int n; cin>>n;
        unordered_map<ll,ll>umap;
        for(ll i=0;i<n;i++) {
            ll x; cin>>x;
            umap[x]++;
        }
        ll ans=0;
        for(auto[x,y]:umap) {
            ans+=min(x-1,y);
        }
        cout<<ans<<endl;
    }
    void xorored() {
        int n; cin>>n;
        ll arr[n];
        for(auto &x:arr) cin>>x;
        ll ans=0;
        for(int i=0;i<n;i++) {
            ans |= arr[i]^arr[0];
        }
        cout<<arr[0]<<" "<<ans<<endl;
    }
    void mod_equality() {
        ll n; cin>>n;
        ll arr[n];
        for(auto &x:arr) cin>>x;
        ll min_ele = *min_element(arr,arr+n);
        ll cnt = count(arr,arr+n,min_ele);
        for(auto i:arr) {
            if(i==min_ele) continue;
            else if(i<=min_ele*2) {
                cout<<n<<endl;
                return;
            }
        }
        cout<<n-cnt<<endl;
        return;
    }
    void beautiful_subsequence() { // TLE
        ll n,k; cin>>n>>k;
        ll i,j;
        ll arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];

        vector<vector<ll>> dp(n + 1, vector<ll>(k + 1));
		vector<vector<ll>> mx(n + 1, vector<ll>(k + 1));
		vector<vector<ll>> val(mxn, vector<ll>(k + 1, 0));
		
        for (i = 0; i <= n; i++) mx[i][0] = 0;
		for (i = 0; i <= k; i++) mx[0][i] = 0;
		for (i = 1; i <= n; i++) {

			dp[i][0] = val[arr[i]][0] + 1;
			val[arr[i]][0]++;
			mx[i][0] = max(mx[i - 1][0], dp[i][0]);
			for (j = 1; j <= k; j++)
			{
				dp[i][j] = max(1 + mx[i - 1][j - 1], 1 + val[arr[i]][j]);
				mx[i][j] = max({mx[i - 1][j], mx[i][j - 1], dp[i][j]});
				val[arr[i]][j] = max(val[arr[i]][j] + 1, dp[i][j]);
			}
		}
		cout << mx[n][k] << "\n";
    }
};
int main() {
    send help
    int t; cin>>t;
    while(t--) {
        Solution s;
        s.beautiful_subsequence();
    }
}
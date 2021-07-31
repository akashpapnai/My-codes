#include <bits/stdc++.h>
typedef long long ll;
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define sll set<ll>
#define llmll map<ll,ll>
using namespace std;

class Solutions {
    int mod = 1e9+7;
    public:
    void cherry() {
        int n; cin>>n;
        ll arr[n];
        for(auto &x: arr) cin>>x;
        ll ans=0;
        for(int i=1;i<n;i++) {
            ans = max(ans, arr[i]*arr[i-1]);
        }
        cout<<ans<<endl;
    }
    void pizzaforces() {
        ll n; cin>>n;
        if(n%2) n++;
        if(n>=6)
            cout<<n/2*5<<endl;
        else cout<<15<<endl;
    }
    void digits_sum() {
        ll n; cin>>n;
        cout<<(n+1)/10<<endl;
    }
    void subsequence_permutations () {
        int n; cin>>n;
        string s; cin>>s;
        string t = s;
        sort(s.begin(),s.end());
        int ans=0;
        for(int i=0;i<n;i++) {
            if(s[i]==t[i]) ans++;
        }
        cout<<n-ans<<endl;
    }
    void wonderful_coloring () {
        string s; cin>>s;
        unordered_map<char,int>umap;
        for(auto i:s) umap[i]++;
        int ans=0;
        int count=0;
        for(auto x:umap) {
            if(x.second>1) {
                ans++;
            } else count++;
        }
        cout<<ans+count/2<<endl;
    }
};

int main() {
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
   #endif
    int t=1;
    cin>>t;
    while(t--) {
        Solutions s;
        s.wonderful_coloring();
    }
}

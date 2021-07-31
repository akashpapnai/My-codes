#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solutions {
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
        s.subsequence_permutations();
    }
}
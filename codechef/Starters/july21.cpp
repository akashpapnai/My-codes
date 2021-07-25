#include<bits/stdc++.h>
#define send {ios::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
using namespace std;
#define ll long long
class Solution {
	int mod = 1e9+7;
	class comp {
		public:
		bool operator()(const pair<ll,ll>&v1, const pair<ll,ll>&v2) const{
			return v1.second == v2.second ? v1.first<v2.first : v2.second<v1.second;
		}
	};
	public:
	void chess_format() {
		int a,b; cin>>a>>b;
		cout<<((a+b<3)?"1\n":(a+b>=3 and a+b<=10)?"2\n":(a+b>=11 and a+b<=60)?"3\n":"4\n");
	}
	void food_chain() {
		ll a,b; cin>>a>>b;
		ll ans=0;
		while(a) {
			ans++;
			a/=b;
		}
		cout<<ans<<endl;
	}
	void max_array_xor() {
		ll a,b; cin>>a>>b;
		ll ans=pow(2,a)-1;
		ans*=2;
		ans*=min(b,(ll)pow(2,a)/2);
		cout<<ans<<endl;
	}
	void ceiling_sum() {
		int a,b; cin>>a>>b;
		int t = min(a,b);
		int ansa = ceil((1.0*(b-t))/2);
		int ansb = ceil((1.0*(t-a))/2);
		int resa = ansa+ansb;
		t++;
		int resb=0;
		if(t<=max(a,b)) {
			ansa = ceil((1.0*(b-t))/2);
			ansb = ceil((1.0*(t-a))/2);
			resb = ansa+ansb;
		}
		cout<<max(resa,resb)<<endl;
	}
	void maximum_possible_sweetness() {
		ll n,d; cin>>n>>d;
		vector<pair<ll,ll>>candy(n);
		for(ll i=0;i<n;i++) cin>>candy[i].first;
		for(ll i=0;i<n;i++) cin>>candy[i].second;
		sort(candy.begin(),candy.end());
		ll ans=0;
		multiset<pair<ll,ll>,comp>mset;
		ll l=0;
		for(ll r=n-1;r>=0;r--) {
			while(l<r and candy[l].first + candy[r].first <= d) {
				mset.insert(candy[l++]);
			}
			auto it = mset.find(candy[r]);
			if(l>r and it!=mset.end()) mset.erase(it);
			auto [cost1,sweet1] = mset.empty()?make_pair(0LL,0LL) : *mset.begin();
			auto [cost2,sweet2] = candy[r];
			if(cost1+cost2<=d) ans = max(ans,sweet1+sweet2);
		}
		cout<<ans<<endl;
	}
	/*undone*/void odd_bits() {
		int n; cin>>n;

	}
};
int main() {
	send help
	Solution s;
	int t; cin>>t;
	while(t--)
		s.maximum_possible_sweetness();
}
#include<bits/stdc++.h>
#define send {ios::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
using namespace std;
#define ll long long
class Solution {
	int mod = 1e9+7;
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
	/*undone*/void maximum_possible_sweetness() {
		ll n,d; cin>>n>>d;
		ll p[n],s[n];
		for(int i=0;i<n;i++) cin>>p[i];
		for(int i=0;i<n;i++) cin>>s[i];
		vector<pair<ll,ll>>vec(n);
		for(int i=0;i<n;i++) vec[i] = {s[i],p[i]};
		sort(vec.begin(),vec.end(),greater<pair<ll,ll>>());
		
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
		s.odd_bits();
}
#include<bits/stdc++.h>
#define send {ios::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
using namespace std;
typedef long long ll;
class Solution {
	int mod = 1e9+7;
	public:
	void omkar_and_bad_story() {
		ll n; cin>>n;
		vector<ll>arr(n);
		bool flag=false;
		for(auto &x: arr) {cin>>x;if(x<0) flag=true;}
		if(flag) {cout<<"NO\n"; return;}
		cout<<"YES\n101\n";
		for(int i=0;i<=100;i++) cout<<i<<" ";cout<<endl;
	}
};
int main() {
	send help
	Solution s;
	int t; cin>>t;
	while(t--){
		s.omkar_and_bad_story();
	}
}
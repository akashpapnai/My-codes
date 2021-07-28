#include<bits/stdc++.h>
#define send {ios::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
using namespace std;
typedef long long ll;
class Solution {
	int mod = 1e9+7;

	public:
	void digits_sum() {
		ll n; cin>>n;
		ll ans = (n+1)/10;
		cout<<ans<<endl;
	}
};
int main() {
	send help
	int t; cin>>t;
	while(t--){
		Solution s;
		s.digits_sum();
	}
}
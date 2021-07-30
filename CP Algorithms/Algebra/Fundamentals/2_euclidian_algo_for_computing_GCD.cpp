#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
	int mod = 1e9+7;
	public:
	ll gcd(ll a, ll b) {
		return b?gcd(b,a%b) : a;
	}
	long double lcm(ll a, ll b) {
		return (1.0*a*b)/gcd(a,b);
	}
	ll gcd_optimized(ll a,ll b) { // This is better than above gcd function but this is often not required
		if(not a or not b) return a|b;
		unsigned shift = __builtin_ctz(a|b);
		a>>=__builtin_ctz(a);
		do {
			b>>=__builtin_ctz(b);
			if(a>b) swap(a,b);
			b-=a;
		} while(b);
		return a<<shift;
	}
};
int main() {
	ll a,b; cin>>a>>b;
	Solution s;
	cout<<__gcd(a,b)<<endl; // Inbuilt gcd
	cout<<s.gcd(a,b)<<endl;
	cout<<s.gcd_optimized(a,b)<<endl;
	cout<<s.lcm(a,b)<<endl;
}
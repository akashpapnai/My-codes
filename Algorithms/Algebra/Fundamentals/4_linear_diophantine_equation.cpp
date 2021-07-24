#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
A Linear Diophantine Equation (in two variables) is an equation of the general form:
ax + by = c
where a, b, c are given integers, and x, y are unknown integers.
*/
class Solution {
	int mod = 1e9+7;
	public:
	ll lde(ll a, ll b, ll c, ll &x0, ll &y0, ll &g){
		g = gcd(abs(a),abs(b),x0,y0);
		if(c%g) return false;
		x0 *= c/g;
		y0 *= c/g;
		if(a<0) x0 = -x0;
		if(b<0) y0 = -y0;
		return true;
	}
	ll gcd(ll a, ll b, ll &x, ll &y) {
		if(b==0) {
			x=1;
			y=0;
			return a;
		}
		ll x1,y1;
		ll d = gcd(b,a%b,x1,y1);
		x = y1;
		y = x1-y1*(a/b);
		return d;
	}
};
int main() {
	ll a,b,c; cin>>a>>b>>c;
	ll x0,y0,g;
	Solution s;
	ll ans = s.lde(a,b,c,x0,y0,g); // Finding a solution
	cout<<(ans?"true":"false")<<endl;
	if(ans) cout<<x0<<" "<<y0<<" "<<g<<endl;
}
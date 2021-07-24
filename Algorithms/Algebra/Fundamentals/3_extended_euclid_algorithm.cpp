#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
	int mod = 1e9+7;
	public:
	ll ext_ea(ll a, ll b, ll &x, ll &y) { // calculates x,y for ax + by = gcd(a,b)
		if (b == 0) {
        x = 1;
        y = 0;
        return a;
		}
		ll x1, y1;
		ll d = ext_ea(b, a % b, x1, y1);
		x = y1;
		y = x1 - y1 * (a / b);
		return d;
	}
};
int main() {
	ll a,b; cin>>a>>b;
	Solution s;
	ll x,y;
	cout<<"GCD of a and b is: "<<s.ext_ea(a,b,x,y)<<endl;
	cout<<"Value of x and y is: "<<x<<" "<<y<<" respectively.\n";
}
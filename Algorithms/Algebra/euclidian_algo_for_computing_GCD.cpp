#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
	int mod = 1e9+7;
	public:
	ll gcd(ll a, ll b) {
		return b?gcd(b,a%b) : a;
	}
};
int main() {
	ll a,b; cin>>a>>b;
	Solution s;
	cout<<s.gcd(a,b)<<endl;
}
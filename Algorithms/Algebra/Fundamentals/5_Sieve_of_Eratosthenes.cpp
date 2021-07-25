#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
Sieve of Eratosthenes is an algorithm for finding all the prime numbers in a segment [1;n] using O(nloglogn) operations.
*/
class Solution {
	int mod = 1e9+7;
	int n;
	vector<bool>isprime;
	public:
	Solution(ll n) : n(n) {isprime.resize(n+1,true);}
	vector<bool> primelist() {
		isprime[0]=isprime[1]=false;
		for(ll i=2;i<=n;i++) {
			if(isprime[i] and (ll)i*i<=n) {
				for(ll j=i*i;j<=n;j+=i) isprime[j] = false;
			}
		}
		return isprime;
	}
};
int main() {
	int n; cin>>n;
	Solution s(n);
	vector<bool>ans = s.primelist();
	for(auto i:ans) cout<<(i?"true ":"false ");
	cout<<endl;
}
// TEST
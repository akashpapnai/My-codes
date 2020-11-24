#include<bits/stdc++.h>
#define ll long long
using namespace std;
// map<ll,ll>umap;
// ll answer(ll n,ll a, ll b, ll c) {
//     if(n==0) {
//         return 0;
//     }
//     if(n<0) {
//         return INT_MIN;
//     }
//     return umap[n]=1+max(max(answer(n-a,a,b,c),answer(n-b,a,b,c)),answer(n-c,a,b,c));
// }
ll bottomup(ll n,ll a,ll b,ll c) {
    ll dp[n+1];
    dp[0] = 0;
    for(int i=1;i<=n;i++) {
        ll r1=INT_MIN,r2=INT_MIN,r3=INT_MIN;
        if(i>=a) {
            r1  =dp[i-a];
        }
        if(i>=b){
            r2= dp[i-b];
        }
        if(i>=c) {
            r3 = dp[i-c];
        }
        dp[i] = 1+max(max(r1,r2),r3);
    }
    return dp[n];
}
int main()
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<bottomup(n,a,b,c);
}
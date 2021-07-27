#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
   const int mod = 1e9+7;
   public:
   void array_reordering() {
      ll n; cin>>n;
      vector<ll>arr(n);
      for(auto &x: arr) cin>>x;
      sort(arr.begin(),arr.end(),[](ll x,ll y){return x%2<y%2;});
      ll ans=0;
      for(int i=0;i<n;i++) {
         for(int j=i+1;j<n;j++) {
            ans+=__gcd(arr[i],arr[j]*2)>1;
         }
      }
      cout<<ans<<endl;
   }
};
int main() {
   Solution s;
   int t; cin>>t;
   while(t--) s.array_reordering();
}
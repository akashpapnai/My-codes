#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define scan(x) {for(auto &i:x) cin>>i;}
#define fastio {ios::sync_with_stdio(false);cin.tie(NULL);}

class Solution {
   int mod = 1e9+7;
   public:
   void chef_and_spells() {
      vector<int>abc(3);
      for(auto &i:abc) cin>>i;
      sort(abc.begin(),abc.end());
      cout<<abc[2]+abc[1]<<endl;
   }
   void redalert() {
      int n,d,h; cin>>n>>d>>h;
      vector<int>water(n);
      scan(water);
      int label=0;
      for(auto i:water) {
         label+=i>0?i:-d;
         if(label<0)label=0;
         if(label>h) {
            cout<<"YES\n";
            return;
         }
      }
      cout<<"NO\n";
   }
   void beautiful_pairs() {
      int n; cin>>n;
      map<ll,ll>umap;
      vector<ll>arr(n);
      for(int i=0;i<n;i++) {
         int x; cin>>x;
         arr[i]=x;
         umap[x]++;
      }
      ll sum=0;
      for(auto i:arr) {
         sum+=n-umap[i];
      }
      cout<<sum<<endl;
   }
};

int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
fastio
   int n; cin>>n;
   while(n--) {
      Solution s;
      s.beautiful_pairs();
   }
}
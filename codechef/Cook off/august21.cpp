#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
   public:
   void equal_difference() {
      int n; cin>>n;
      map<int,int>umap;
      for(int i=0;i<n;i++) {
         int x; cin>>x;
         umap[x]++;
      }
      int ans=n-2;
      if(n==1) {cout<<"0\n";return;}
      for(auto i:umap) {
         ans = min(ans,n-i.second);
      }
      cout<<ans<<endl;
   }
   void different_string() {
      int n; cin>>n;
      string ans;
      for(int i=0;i<n;i++) {
         string x; cin>>x;
         ans += x[i]=='1'?'0':'1';
      }
      cout<<ans<<endl;
   }
   void chef_and_closure() {
      int n; cin>>n;
      map<ll,int>umap;
      int g2=0;
      for(int i=0;i<n;i++) {
         int x; cin>>x;
         if(abs(x)>=2) g2++;
         umap[x]++;
      }
      if(g2>=2) {cout<<"0\n";return;}
      vector<pair<int,int>>v;
      for(auto i:umap) {
         ll conv = i.first;
         if(conv<0) conv=-conv;

         v.push_back({conv,i.first});
         if(i.second>1) {
            v.push_back({conv,i.first});
         }
      }
      sort(v.begin(),v.end(),greater<pair<int,int>>());
      bool p=1;

      for(int i=0;i<v.size();i++) {
         if(p==0) break;
         for(int j=i+1;j<v.size();j++) {
            ll z=v[i].second;
            ll z2=v[j].second;
            ll k=z*z2;
            if(umap[k]==0) {
               p=0;
               break;
            }
         }
      }
      cout<<(p?"1\n":"0\n");
   }
};

int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
   int n; cin>>n;
   while(n--) {
      Solution s;
      s.chef_and_closure();
   }
}
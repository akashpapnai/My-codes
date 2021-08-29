#include<bits/stdc++.h>
#define send {ios::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
using namespace std;
#define ll long long
#define scan(x) {for(auto &i:x)cin>>i;}
#define show_vec(x) {for(auto i:x) cout<<i<<" ";cout<<endl;}
class Solution {
	long long mod = 1e9+7;
   public:
   void hardest_problem_bet() {
      long long a,b,c; cin>>a>>b>>c;
      cout<<(a<b and a<c?"Draw":b<c and b<a?"Bob":"Alice");
      cout<<endl;
   }

   void odd_repeat() {
      long long n,k,s; cin>>n>>k>>s;
      cout<<(s-((n)*(n)))/(k-1)<<endl;
   }

   void maximise_the_subsequence() {
      long long n,k; cin>>n>>k;
      vector<long long>arr(n); scan(arr);
      sort(arr.begin(),arr.end());
      for(auto i=arr.begin();i!=arr.begin()+k;i++) {
         *i *= *i<0?-1:1;
      }
      long long ans=0;
      for(auto i:arr) {
         ans+=i>0?i:0;
      }
      cout<<ans<<endl;
   }

   void remove_one_element() {
      long long n; cin>>n;
      vector<long long>A(n);
      vector<long long>B(n-1);
      unordered_set<int>s;
      for(auto &i:A) {
         int x; cin>>x;
         i=x;
         s.insert(x);
      }
      for(auto &i:B) {
         int x; cin>>x;
         i=x;
      }
      sort(A.begin(),A.end());
      sort(B.begin(),B.end());
      long long ans=B[0]-A[1];
      for(auto i:B) {
         if(s.count(i-ans)==0) {
            ans=B[0]-A[0];
            break;
         }
      }
      if(ans<=0) ans=B[0]-A[0];
      cout<<ans<<endl;
   }

   void magical_flips() {

   }

   void grid_path() {

   }

   void chef_and_professor() {

   }

};
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
	send help
	Solution s;
	long long t; 
   cin>>t;
	while(t--) {
      Solution s;
		s.remove_one_element();
   }
}
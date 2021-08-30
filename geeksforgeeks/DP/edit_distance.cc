#include<bits/stdc++.h>
using namespace std;

int solve_util(string&A,string&B,int n, int m) {
   int dp[2][n+1];
   memset(dp,0,sizeof(dp));
   for(int i=0;i<=n;i++) dp[0][i]=i;
   
   for(int i=1;i<=m;i++) {
      for(int j=0;j<=n;j++) {
         if(j==0) dp[i%2][j]=i;
         else if(A[j-1]==B[i-1]) {
            dp[i%2][j]=dp[(i-1)%2][j-1];
         }
         else {
            dp[i%2][j] = 1+min({dp[(i-1)%2][j],dp[i%2][j-1],dp[(i-1)%2][j-1]});
         }
      }
   }
   return dp[m%2][n];
}

int E_D(string A, string B) {
   int n=A.size();
   int m=B.size();
   return solve_util(A,B,n,m);
}
int main() {
   string A="sunday";
   string B="saturday";
   cout<<E_D(A,B);
}
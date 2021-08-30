#include<bits/stdc++.h>
using namespace std;

int M_C_P(vector<vector<int>>&mcp,int row, int col) {
   int n=mcp.size(),m=mcp[0].size();
   int dp[n][m]={0};
   dp[0][0]=mcp[0][0];
   for(int i=1;i<n;i++) {
      dp[i][0] = mcp[i][0]+dp[i-1][0];
   }
   for(int i=1;i<m;i++) {
      dp[0][i] = mcp[0][i]+dp[0][i-1];
   }
   for(int i=1;i<n;i++) {
      for(int j=1;j<m;j++) {
         dp[i][j] = mcp[i][j] + min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
      }
   }
   return dp[n-1][m-1];
}
int main() {
   vector<vector<int>>mcp{{1,2,3},{4,8,2},{1,5,3}};
   int row=2,col=2;
   cout<<M_C_P(mcp,row,col);
}
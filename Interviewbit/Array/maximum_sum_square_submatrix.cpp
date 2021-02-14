// Problem statement: https://www.interviewbit.com/problems/maximum-sum-square-submatrix/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int solve(vector<vector<int>> A, int B) {
    int n = A.size();
    int ans= INT_MIN;
    vector<vector<int>>dp((n+1),vector<int>(n+1,0));
    // creating dp table
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+A[i-1][j-1];
        }
    }
    for(int i=B;i<=n;i++) {
        for(int j=B;j<=n;j++) {
                int sum = dp[i][j]-dp[i][j-B]-dp[i-B][j]+dp[i-B][j-B];
                ans = max(ans,sum);
        }
    }
    return ans;
}

int main() {
    int B=3;
    vector<vector<int>> A = {
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {3, 8, 6, 7, 3},
        {4, 4, 4, 4, 4},
        {5, 5, 5, 5, 5}
    };
    cout<<solve(A,B)<<endl;
}
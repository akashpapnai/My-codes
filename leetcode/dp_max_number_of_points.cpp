// Problem Statement: https://leetcode.com/contest/weekly-contest-250/problems/maximum-number-of-points-with-cost/

#include<bits/stdc++.h>
using namespace std;
class Solution {
    /*
    1 2 3
    1 5 1
    3 1 1
    */
public:
    long long maxPoints(vector<vector<int>>& points) {
        vector<vector<long long>> dp(points.size(), vector<long long>(points[0].size(), -1));
        
        for (int i = 0; i < points[0].size(); ++i) {
            dp[0][i] = points[0][i];
        }
        
        for (int i = 1; i < points.size(); ++i) {
            for (int j = 0; j < points[i].size(); ++j) {
                for (int k = 0; k < points[i].size(); ++k) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][k] - abs(k - j) + points[i][j]);
                }
            }
        }
        
        long long max_ans = -1;
        for (const auto v : dp.back()) {
            max_ans = max(max_ans, v);
        }
        
        return max_ans;
    }
};
int main() {
    vector<vector<int>>A{{1,2,3},{1,5,1},{3,1,1}};
    Solution s;
    cout<<s.maxPoints(A)<<endl;
}
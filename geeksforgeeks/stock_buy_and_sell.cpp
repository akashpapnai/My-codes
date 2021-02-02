// Problem statement: https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/0/?track=SPC-Arrays&batchId=135#
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>solve(int *arr,int n) {
    // 4 2 2 2 4
    vector<vector<int>>ans;
    int i=0;
    while(i<n-1) {
        while(i<n-1 and arr[i]>=arr[i+1]) {
            i++;
        }
        if(i==n-1) break;
        int buy=i++;
        while(i<n and arr[i]>=arr[i-1]) {
            i++;
        }
        int sell = i-1;
        vector<int>temp;
        temp.push_back(buy);
        temp.push_back(sell);
        ans.push_back(temp);
    }
    return ans;
}
int main() {
    int n = 5;
    int arr[] = {4,2,2,2,4};
    vector<vector<int>> sol = solve(arr,n);
    for(int i=0;i<sol.size();i++) {
        cout<<"( ";
        for(int j=0;j<sol[0].size();j++) {
            cout<<sol[i][j]<<' ';
        }
        cout<<") ";
    }
    cout<<endl;
}
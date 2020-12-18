// Problem statement: https://www.interviewbit.com/problems/prettyprint/
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > prettyPrint(int n) {
    vector<vector<int>>ans(2*n-1,vector<int>(2*n-1));

    int top = 0,down=2*n-1,left=0,right=2*n-1;
    while(n) {
        for(int i=left;i<right;i++) {
            ans[top][i]=n;
            ans[down-1][i] = n;
        }
        for(int i=top;i<down;i++) {
            ans[i][left]=n;
            ans[i][right-1] = n;
        }
        top++;
        down--;
        left++;
        right--;
        n--;
    }
    return ans;
}

int main() {
    int A=4;
    vector<vector<int>> sol = prettyPrint(A);
    for(int i=0;i<sol.size();i++) {
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j]<<' ';
        }
        cout<<endl;
    }
}
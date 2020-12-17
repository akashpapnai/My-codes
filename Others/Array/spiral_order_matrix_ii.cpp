// Problem statement: https://www.interviewbit.com/problems/spiral-order-matrix-ii/
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> spiral(int n) {
    vector<vector<int>>ans(n,vector<int>(n));
    int left=0,right=1,up=0,down=0;
    int temp=1;
    int count=1;
    int leftpos=0,uppos=0,downpos=n-1,rightpos = n-1;
    while(temp<=n*n) {
        if(left) {
            for(int i=rightpos;i>=leftpos;i--) {
                ans[downpos][i]=temp;
                temp++;
            }
            downpos--;
            count++;
            if(count==2) {
                count=0;
            }
            left = 0;
            up = 1;
        }
        else if(right) {
            for(int i=leftpos;i<=rightpos;i++) {
                ans[uppos][i]=temp;
                temp++;
            }
            uppos++;
            count++;
            if(count==2) {
                count=0;
            }
            right = 0;
            down = 1;
        }
        else if(up) {
            for(int i=downpos;i>=uppos;i--) {
                ans[i][leftpos]=temp;
                temp++;
            }
            leftpos++;
            count++;
            if(count==2) {
                count=0;
            }
            up = 0;
            right = 1;
        }
        else {
            for(int i=uppos;i<=downpos;i++) {
                ans[i][rightpos]=temp;
                temp++;
            }
            rightpos--;
            count++;
            if(count==2) {
                count=0;
            }
            down = 0;
            left = 1;
        }
    }
    return ans;
}
int main() {
    int b;
    b=5;
    vector<vector<int>> sol = spiral(b);
    for(int i=0;i<sol.size();i++) {
        for(int j=0;j<sol[0].size();j++) {
            cout<<spiral(b)[i][j]<<' ';
        }
        cout<<endl;
    }
}

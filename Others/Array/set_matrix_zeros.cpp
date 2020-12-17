// Problem statement: https://www.interviewbit.com/problems/set-matrix-zeros/
#include<iostream>
#include<vector>
using namespace std;
void setzeros(vector<vector<int>>&A) {
    bool r=0,c=0;
    for(int i=0;i<A.size();i++) {
        if(A[0][i]==0){
            r=1;
            break;
        }
    }
    for(int i=0;i<A[0].size();i++) {
        if(A[i][0]==0) {
            c=1;
            break;
        }
    }
    for(int i=1;i<A.size();i++) {
        for(int j=1;j<A.size();j++) {
            if(A[i][j]==0) {
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    for(int i=1;i<A.size();i++) {
        for(int j=1;j<A[0].size();j++) {
            if(A[i][0]==0 or A[0][j]==0) {
                A[i][j]=0;
            }
        }
    }
    if(r) {
        for(int i=0;i<A[0].size();i++) {
            A[0][i]=0;
        }
    }
    if(c) {
        for(int i=0;i<A.size();i++) {
            A[i][0] = 0;
        }
    }
}
// defining compare function for sort
int main() {
    vector<vector<int>> arr = {{1,0,1},{1,1,1},{1,1,0}};
    setzeros(arr);
    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[0].size();j++) {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}

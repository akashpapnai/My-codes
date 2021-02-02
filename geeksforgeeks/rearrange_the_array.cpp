// Problem statement: https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1
#include<bits/stdc++.h>
using namespace std;
void arrange(long long arr[], int n) {
    for(int i=0;i<n;i++) {
        arr[i] += (arr[arr[i]]%n)*n;
    }
    for(int i=0;i<n;i++){
        arr[i]/=n;
    }
}
int main(){
    
    int t=1;
    //testcases
    while(t--){
        
        int n=8;
        long long A[n]={5,0,3,7,1,4,6,2};
        arrange(A, n);
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
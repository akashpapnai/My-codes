// Problem statement: https://www.interviewbit.com/problems/partitions/
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int solve(int A,vector<int>B) {
    int count = 0;
    int sum = accumulate(B.begin(),B.end(),0);
    if(sum%3==0) {
        vector<int>prefix(A),suffix(A);
        int sumtillnow = 0;
        for(int i=0;i<A;i++) {
            prefix[i] = sumtillnow+B[i];
            suffix[i] = sum-sumtillnow;
            sumtillnow += B[i];
        }
        for(int i = 0;i<A;i++) {
            if(prefix[i]==sum/3) {
                for(int j=i+2;j<A;j++) {
                    if(suffix[j]==sum/3) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}
int main() {
    int A = 4;
    vector<int>B = {0,-1,1,0};
    cout<<solve(A,B)<<endl;
}
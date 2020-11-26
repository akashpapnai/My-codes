/*
Problem Statement: https://www.interviewbit.com/problems/sum-of-pairwise-hamming-distance/
*/

#include<bits/stdc++.h>
using namespace std;
int hammingdistance(vector<int>arr) {     // [2,4,6]
    long long res=0;
    for(int i=0;i<31;i++) {               // A number can have max of 32 bit which is 10**9 approx which is limit given in question.
        int count = 0;
        for(int j=0;j<arr.size();j++) {
            if(arr[j]&(1<<i)){
                count++;
            }
        }
        res+=count*2*(arr.size()-count);  // count represent number of 1's in i'th bit for all numbers in array
        res%=1000000007;                  // (arr.size()-count) represent number of 0's in i'th bit for all numbers in array
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++) {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<hammingdistance(arr)<<endl;
}
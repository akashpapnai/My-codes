// Problem Statement: https://www.interviewbit.com/problems/3-sum/
#include <bits/stdc++.h>
using namespace std; 
int solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    long long res=21474836470;
    long long sum=0;
    for(int i=0;i<A.size()-2;i++) {
        int j=i+1,k=A.size()-1;
        while(j<k) {
            sum = (long long)A[i]+A[j]+A[k];
            
            if(sum-B==0) return sum;
            
            if(abs(sum-B)<abs(B-res)) {
                res=sum;
            }
            else if(sum>B) {
                k--;
            }
            else {
                j++;
            }
        }
    }
    return (int)res;
}

int solve2(vector<int> &A, int B) {
    int N = A.size() - 1;
    sort(A.begin(),A.end());
    
    long mini=1000000000, res=0;
    for(int i=0; i<=N-2; i++){
        int low = i+1, hi = N;
        while(low < hi){
            res = (long) A[i]+A[low]+A[hi];
            if(res == B) return B;
            if(abs(res - B) < abs(B - mini))
                mini = res;
            else if(res > B)
                hi--;
            else
                low++;
        }
    }
    return mini;
}



// Driver code 
int main() 
{ 
    vector<int> A = {  2, 1, -9, -7, -8, 2, -8, 2, 3, -8};
    int B=-1;
    cout<<solve(A,B)<<endl;
    cout<<solve2(A,B);
} 

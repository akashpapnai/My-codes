// Problem Statement: https://www.interviewbit.com/problems/implement-strstr/
#include <bits/stdc++.h>
using namespace std; 
int solve(string A,string B) {
    int n = A.size();
    int m = B.size();
    int ans = -1;
    for(int i=0;i<n;i++){
        int j = 0;
        int k = i;
        while(A[k]==B[j]){
            if(j==m-1){
                return i;
            }
            j++;
            k++;
        }
    }
    return ans;
}

//Efficient method will be by using KMP Algorithm

// Driver code 
int main() 
{ 
    string A = "babaababa";
    string B = "aab";
    int res=solve(A,B);
    cout<<res;
    cout<<endl;
} 

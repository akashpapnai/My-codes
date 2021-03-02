// Problem Statement: https://www.interviewbit.com/problems/minimum-appends-for-palindrome/
#include <bits/stdc++.h>
using namespace std; 
int solve(string A) {
    // abcade
    int ans=0;
    int i=0,j=A.size()-1;

    while (i<=j) {
        if(A[i]==A[j]) {
            i++;
            j--;
        }
        else {
            if(j==A.size()-1) {
                ans++;
                i++;
            }
            else {
                ans+=A.size()-j-1;
                j=A.size()-1;
            }
        }
    }
    return ans;
}

int main() 
{ 
    string A = "abcde";
    cout<<solve(A);
} 
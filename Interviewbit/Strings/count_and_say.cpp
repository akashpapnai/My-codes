// Problem Statement: https://www.interviewbit.com/problems/count-and-say/
#include <bits/stdc++.h>
using namespace std; 
string solve(int A) {
    if(A==0) return "";
    if(A==1)return "1";
    string ans="1";                             // 1 11 21 1211 
    int i=1;
    while(i<A) {
        int count=1;
        string temp;
        for(int j=0;j<ans.size()-1;j++) {
            if(ans[j]==ans[j+1]) {
                count++;
            }
            else {
                temp+=to_string(count)+ans[j];
                count=1;
            }
        }
        temp+=to_string(count)+ans[ans.size()-1];
        ans = temp;
        i++;
    }
    return ans;
}

// Driver code 
int main() 
{ 
    int A = 6;
    cout<<solve(A);
} 

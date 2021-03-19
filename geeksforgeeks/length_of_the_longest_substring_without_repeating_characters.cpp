// Problem Statement: https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/

#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
    int solve(string s);
};

int Solution::solve(string str) {

    unordered_map<char,int>umap;
    int i=0,j=0;
    int ans = 1;

    while(j<str.size()) {
        
        umap[str[j]]++;

        if(umap[str[j]]==2) {
            umap[str[j]]--;
            j--;
            //cout<<j<<' '<<i<<endl;
            ans = max(ans,j-i+1);
            umap[str[i]]--;
            i++;
        }

        j++;
    }

    if(j==str.size()) j--;
    
    ans = max(ans,j-i+1);
    
    return ans;
}

int main() {
    string s = "qwertyuiop";
    Solution str;
    cout<<str.solve(s);
}
// Problem statement : http://codeforces.com/problemset/problem/41/A

#include<iostream>
#include<cstring>
using namespace std;
 
int main()
{
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size()) cout<<"NO";
    else {
        int n = s.size();
        for(int i = 0;i<n;i++) {
            if(s[i]!=t[n-i-1]) {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    return 0;
}
// Problem statement : http://codeforces.com/problemset/problem/41/A

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    for(int i=0;i<strlen(s);i++) {
        if (s[i]=='H' or s[i]=='Q' or s[i]=='9') {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
// Problem statement: https://codeforces.com/problemset/problem/208/A

#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int flag = 1;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B') {
            if(!flag) {
                cout<<' ';
                flag = 1;
            }
            i+=2;
        }
        else {
            cout<<s[i];
            flag = 0;
        }
    }
    return 0;
}
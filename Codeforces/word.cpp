// Problem statement : http://codeforces.com/problemset/problem/59/A

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int lcl=0,ucl=0;
    for(int i=0;i<s.size();i++) {   
        if(isupper(s[i])) ucl++;
        else lcl++;
    }
    if(lcl>=ucl) {
        for(int i=0;i<s.size();i++) {
            s[i] = tolower(s[i]);
        }
    }
    else
        for(int i=0;i<s.size();i++) {
            s[i] = toupper(s[i]);
        }
    cout<<s;
}
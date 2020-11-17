// Problem statement : http://codeforces.com/problemset/problem/58/A

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int ans=0;
    cin>>s;
    string st = "hello";     
    int i=0,j;
    for(j = 0;j<s.size();j++) {
        if(i>5) {
            break;
        }
        if(st[i]==s[j]) {
            i++;
        } 
    }
    (i>=5)? cout<<"YES":cout<<"NO";
}

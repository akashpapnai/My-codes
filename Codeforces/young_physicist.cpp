// Problem statement : http://codeforces.com/problemset/problem/69/A

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    a=b=c=0;
    while(t--) {
        int d,e,f;
        cin>>d>>e>>f;
        a+=d;
        b+=e;
        c+=f;
    }
    (a==0 and b==0 and c==0)? cout<<"YES":cout<<"NO";
}

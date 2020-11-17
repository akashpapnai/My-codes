// Problem statement : http://codeforces.com/problemset/problem/1328/A

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        a%b==0?cout<<0<<endl:cout<<b-(a%b)<<endl;
    }
}

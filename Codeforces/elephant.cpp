// Problem statement : http://codeforces.com/problemset/problem/617/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x%5==0){
        cout<<x/5;
        return 0;
    }
    cout<<x/5+1;
}
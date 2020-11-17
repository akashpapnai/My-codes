// Problem statement : http://codeforces.com/problemset/problem/96/A

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char n[100];
    scanf("%s",n);
    int change = 1;
    for(int i=0;i<strlen(n);i++) {
        if (change>=7) {
            cout<<"YES";
            return 0;
        }
        if(n[i]!=n[i+1]) change = 1;
        else change++;
    }
    cout<<"NO";
}

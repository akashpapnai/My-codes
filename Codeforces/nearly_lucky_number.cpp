// Problem statement : http://codeforces.com/problemset/problem/110/A

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,count=0;
    char s[20];
    scanf("%s",s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            count++;
        }
    }
    if(count==4||count==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
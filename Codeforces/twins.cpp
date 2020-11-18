// Problem statement : http://codeforces.com/problemset/problem/160/A

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sumb=0;
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
        sumb+=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int suma = 0,res = 0;
    for(int i=0;i<n;i++) {
        if(suma>sumb) break;
        suma+=arr[i];
        res++;
        sumb-=arr[i];
    }
    cout<<res;
}

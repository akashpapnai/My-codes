// Problem statement : http://codeforces.com/problemset/problem/158/B

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr;
    int count[5] = {0}; 
    for(int i=0;i<n;i++) 
    {
        cin>>arr; 
        count[arr]++;
    }
    int res = count[4]+count[3]+(count[2]/2);
    count[1]-=count[3];
    if(count[2]%2){
        res++;
        count[1]-=2;
    }
    if(count[1]>0){
        res+=(count[1]+3)/4;
    }
    cout<<res;
}
// Problem Statement:  https://codingcompetitions.withgoogle.com/kickstart/round/0000000000050e01/00000000000698d6

#include<bits/stdc++.h>
using namespace std;
void solution(int *arr,int n,int p,int z) {
    sort(arr,arr+n,greater<int>());
    int sum = 0;
    for(int i = 0;i<p;i++) {
        sum+=arr[i];
    }
    int large = arr[0]*p;
    large-=sum;
    for(int i=1;i<(n-p+1);i++) {
        sum -= arr[i-1];
        sum += arr[i+p-1];
        large = min((arr[i]*p)-sum,large);
    }
    cout<<"Case #"<<z+1<<": "<<large<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int z = 0;z<t;z++) {
        int n,p;
        cin>>n>>p;
        int arr[n];
        for(int i = 0;i<n;i++) {
            cin>>arr[i];
		}
        solution(arr,n,p,z);
    }
}
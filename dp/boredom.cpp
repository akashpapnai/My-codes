// Problem statemenet: http://codeforces.com/problemset/problem/455/A

#include<iostream>
typedef long long ll;
#include<vector>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int maxi=-1;
    vector<ll>a(100005,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
        maxi=max(maxi,x);
    }
    vector<ll>b(100005,0);
    b[0]=0;
    b[1]=a[1];
    for(ll i=2;i<=100000;i++){
        b[i]=max(b[i-1],b[i-2]+(a[i]*i));
    }
    cout<<b[maxi];
}
int main() {
    solve();
    return 0;
}
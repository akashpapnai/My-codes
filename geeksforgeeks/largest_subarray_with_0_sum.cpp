#include<bits/stdc++.h>
using namespace std;
#define send {ios::sync_with_stdio(false);}
#define help {cin.tie(NULL);}

typedef long long ll;

void solve() {
    ll c,r;
    cin>>r>>c;
    string s;
    cin>>s;
    ll res = 0;
    int frog=-1;
    while(frog<r) {
        int temp = c;
        int flag=0;
        if(frog+temp>r) {
            cout<<res+1<<endl;
            break;
        }
        else if(frog==r-1) {
            cout<<res<<endl;
        }
        while(temp) {
            if(s[frog+temp]=='1') {
                frog = frog+temp;
                flag=1;
                res++;
                break;
            }
            else temp--;
        }
        if(flag) {
            flag=0;
        }
        else {
            cout<<-1<<endl;
            return;
        }
    }
}

int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,int>umap;
    int sum=0;
    int max_len = 0;
    
    for(int i=0;i<n;i++) {
        sum+=A[i];
        if(A[i] == 0 and max_len == 0) {
            max_len = 1;
        }
        if(sum==0) {
            max_len = i+1;
        }
        if(umap.find(sum) != umap.end()) {
            max_len = max(max_len, i-umap[sum]);
        }
        else {
            umap[sum] = i;
        }
    }
    
    return max_len;
}

int main() {

    send help
    ll t = 1;
    // cin>>t;
    while(t--) {
        // solve();
        int A[] = {15, -2, 2, -8, 1, 7, 10, 23};
        int n=8;
        cout<<maxLen(A,n)<<endl;
    }
}
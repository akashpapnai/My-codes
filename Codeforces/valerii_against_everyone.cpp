#include<iostream>
#include<math.h>
#include<map>
using namespace std;
void solution(int *a, int n) {
    map<int,int>umap;
    for(int i=0;i<n;i++) {
        if (umap[a[i]]) {
            umap[a[i]]++;
        }
        else {
            umap[a[i]]=1;
        }
    }
    map<int,int>::iterator it;
    for(it=umap.begin();it!=umap.end();it++) {
        cout<<it->first<<" -> "<<it->second<<endl;
    }
    for(it = umap.begin();it!=umap.end();it++) {
        if (it->second>1) {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while( t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        solution(a,n);
    }
}
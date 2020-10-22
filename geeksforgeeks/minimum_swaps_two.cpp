#include<bits/stdc++.h>
using namespace std;
int minimumSwaps(vector<int> &arr) {
    int ans=0;
    for(int i= 0;i<arr.size();i++){
        if(arr[i]==i+1)
            continue;
        else {
            swap(arr[i],arr[arr[i]-1]);
            ans++;
            i--;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<minimumSwaps(arr)<<endl;
}
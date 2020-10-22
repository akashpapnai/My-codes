#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll t,garb,n;
	cin>>t;
    while(t--)
    {
        cin>>garb;
        ll arr[garb];
        for(int i =0;i<garb;i++)
        {
            cin>>arr[i];
        }
        n = sizeof(arr)/sizeof(arr[0]);
        ll min_ind = 0;
        ll max_ind = n-1;
        ll max_ele = arr[n-1]+1;
        for (int i = 0;i<n;i++)
        {
            if (i%2 == 0)
            {
                arr[i]+=(arr[max_ind]%max_ele)*max_ele;
                max_ind-=1;
            }
            else
            {
                arr[i]+=(arr[min_ind]%max_ele)*max_ele;
                min_ind+=1;
            }
        }
        for (int i=0;i<n;i++)
        {
            arr[i]=int(arr[i]/max_ele);
            cout<<arr[i]<<" ";
        }
		printf("\n");
    }
    	return 0;
}
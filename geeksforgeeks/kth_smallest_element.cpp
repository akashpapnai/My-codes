#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int>&arr,int n,int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    
    if (l<n and arr[i]<arr[l])
    {
        largest = l;
    }
    if(r<n and arr[largest]<arr[r])
    {
        largest = r;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapsort(vector<int>&arr,int k)
{
    int n = arr.size();
    for (int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);
    for (int i=n-1;i>=k-1;i--)
    {
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}
int main() {
	int t;
	cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k;
        cin>>k;
        heapsort(arr,k);
        printf("%d\n",arr[k-1]);
    }
	return 0;
}

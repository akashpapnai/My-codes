// Problem statement: https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int res=1,occupied=1,i=1,j=0;
    	while(i<n) {
    	    if(arr[i]<=dep[j]) {
    	        occupied++;
    	        i++;
    	        res = max(occupied,res);
    	    }
    	    else {
    	        occupied--;
    	        j++;
    	    }
    	}
    	return res;
    }
};

int main() {
    Solution s;
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    cout<<s.findPlatform(arr,dep,6);
}
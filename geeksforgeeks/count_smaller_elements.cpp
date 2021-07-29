// { Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
    class Node {
        public:
        int val,count;
        Node *left,*right;
        Node(int x, int y) : val(x),count(y),left(NULL),right(NULL) {}
    };
    int addNode(Node* &root, int x, int y) {
        if(not root) {
            root = new Node(x,0);
            return y;
        }
        if(root->val<x) {
            return root->count+addNode(root->right,x,y+1);
        }
        root->count++;
        return addNode(root->left,x,y);
    }
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<int>ans(n,0);
	    Node*root = NULL;
	    for(int i=n-1;i>=0;i--) {
	        ans[i] = addNode(root,arr[i],0);
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
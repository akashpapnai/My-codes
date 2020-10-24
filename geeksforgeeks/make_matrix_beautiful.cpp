// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution
{
public:
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int total_sum = 0;
        int max_sum = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            int row_sum =0,col_sum = 0;
            for(int j = 0;j<n;j++)
            {
                row_sum+=matrix[i][j];
                col_sum+=matrix[j][i];
            }
            max_sum = max(max_sum,row_sum);
            max_sum = max(max_sum,col_sum);
            total_sum +=row_sum;
        }
        return max_sum*n - total_sum;
    } 
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}

  // } Driver Code Ends
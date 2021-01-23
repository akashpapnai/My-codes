// Problem statement - https://www.interviewbit.com/problems/sort-array-with-squares/
#include<bits/stdc++.h>
using namespace std;
vector<int>solve(vector<int> &A) {
    vector<int>ans;
    int i = 0;
    int j = A.size()-1;
    while(i<=j) {
        if(abs(A[i])>=abs(A[j])) {
            ans.push_back(A[i]*A[i]);
            i++;
        }
        else {
            ans.push_back(A[j]*A[j]);
            j--;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
    vector<int>A = { -855, -847, -747, -708, -701, -667, -666, -618, -609, -536, -533, -509, -500, -396, -336, -297, -284, -229, -173, -173, -132, -38, -5, 35, 141, 169, 281, 322, 358, 421, 436, 447, 478, 538, 547, 644, 667, 673, 705, 711, 718, 724, 726, 811, 869, 894, 895, 902, 912, 942, 961 };
    vector<int>ans = solve(A);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<' ';
    }
    cout<<endl;
}
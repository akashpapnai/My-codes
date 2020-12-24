// Problem statement: https://www.interviewbit.com/problems/max-distance/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int secondapproach(vector<int> &A) {                            //O(n)
    vector<int>left(A.size());
    vector<int>right(A.size());
    left[0]=A[0], right[A.size()-1] = A[A.size()-1];
    for(int i=1;i<A.size();i++) {
        left[i] = min(left[i-1],A[i]);
    }
    for(int i=A.size()-2;i>=0;i--) {
        right[i] = max(right[i+1],A[i]);
    }
    int a=0,b=0;
    int ans=0;
    while(a<A.size() and b<A.size()) {
        if(left[a]<=right[b]) {
            ans = max(ans,b-a);
            b++;
        }
        else {
            a++;
        }
    }
    return ans;
}
int maximumGap(vector<int> &A) {                                //O(n * log n)
    vector<pair<int,int>> val;
    for(int i=0;i<A.size();i++) {
        val.push_back(make_pair(A[i],i));
    }
    sort(val.begin(),val.end());
    int ans=0,maxima = val[A.size()-1].second;
    for(int i=A.size()-1;i>=0;i--) {
        ans = max(ans,maxima-val[i].second);
        maxima = max(maxima,val[i].second);
    }
    return ans;
}
int main() {
    vector<int>A = {3,4,5,2};
    int ans = maximumGap(A);
    cout<<ans;
    cout<<endl;
}
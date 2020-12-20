// Problem statement: https://www.interviewbit.com/problems/merge-overlapping-intervals/
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};
bool comp(Interval i1,Interval i2) {
    return i1.start<i2.start;
}
vector<Interval> solve(vector<Interval> &A) {
    sort(A.begin(),A.end(),comp);
    vector<Interval>ans;
    Interval s;
    s.start = A[0].start;
    s.end = A[0].end;
    for(int i=0;i<A.size();i++) {
        if(A[i].start>s.end){                            // No conflict
            ans.push_back(s);
            s.start = A[i].start;
            s.end = A[i].end;
        }
        else if(A[i].end>s.end){                          // Conflict
            s.end = A[i].end;
        }
    }
    ans.push_back(s);
    return ans;
}

int main() {
    int B=3;
    vector<Interval> A = { {1, 10}, {2, 9}, {3, 8}, {4, 7}, {5, 6}, {6, 6} };
    vector<Interval>sol = solve(A);
    for(int i=0;i<sol.size();i++) {
        cout<<'['<<sol[i].start<<" , "<<sol[i].end<<"] ";
    }
    cout<<endl;
}
// Problem statement: https://www.interviewbit.com/problems/largest-number/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// defining compare function for sort
bool comp(string a, string b) {
    //joining two string side by side
    string ab = a.append(b);
    string ba = b.append(a);
    // if string ab comes out to be greater than ba string then return true.
    return ab.compare(ba)>0? 1:0;
}
string largestNumber(vector<int> &A) {
    // creating vector string array
    vector<string>str;
    for(int i=0;i<A.size();i++) {
        str.push_back(to_string(A[i]));
    }
    // sort the string array
    sort(str.begin(),str.end(),comp);
    string ans = "";
    for(int i=0;i<str.size();i++) {
        ans+=str[i];
    }
    int i=0;
    // If all numbers comes out to be 0
    while(ans[i]=='0') {
        i++;
    }
    //ans turns out to be 0
    if(i==ans.size()){
        ans="0";
    }
    return ans;
}
int main() {
    vector<int>ques = {3, 30, 34, 5, 9};
    cout<<largestNumber(ques)<<'\n'; 
}

// Problem statement: https://www.interviewbit.com/problems/find-permutation/
#include<iostream>
#include<vector>
using namespace std;
vector<int> find_per(string s,int b) {
    vector<int>ans;
    int num = b,min,is = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='I') {
            is++;
        }
    }
    num-=is;
    min=num-1;
    ans.push_back(num);
    for(int i=0;i<s.size();i++) {
        if(s[i]=='D'){
            ans.push_back(min);
            min--;
        }
        else {
            num++;
            ans.push_back(num);
        }
    }
    return ans;
}
int main() {
    int b;
    string s;
    b = 3;
    s = "ID";
    for(int i=0;i<find_per(s,b).size();i++) {
        cout<<find_per(s,b)[i]<<' ';
    }
    cout<<endl;
}

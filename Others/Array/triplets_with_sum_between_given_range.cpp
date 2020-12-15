//Problem Statement: https://www.interviewbit.com/problems/triplets-with-sum-between-given-range/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool triplets(vector<string>&arr) {
    vector<double>conv;
    for(int i=0;i<arr.size();i++) {
        conv.push_back(stod(arr[i]));
    }
    double a = conv[0],b=conv[1],c =conv[2];
    for(int i=3;i<conv.size()+1;i++) {
        double sum = a+b+c;
        if(sum>1 and sum<2) 
            return 1;
        if(sum>=2) {
            double m = max(a,max(b,c));
            if(m==a) a=conv[i];
            else if(m==b) b=conv[i];
            else c=conv[i];
        }
        else if(sum<=1){
            double m = min(a,min(b,c));
            if(m==a) a=conv[i];
            else if(m==b) b=conv[i];
            else c=conv[i];
        }
    }
    return 0;
}
int main() {
    vector<string>arr= {"0.6", "0.7", "0.8", "1.2", "0.4"};
    triplets(arr)?cout<<"True\n":cout<<"False\n";
    return 0;
}
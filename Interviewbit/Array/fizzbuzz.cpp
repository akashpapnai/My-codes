/*
Problem Statement: https://www.interviewbit.com/problems/fizzbuzz/
*/

#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
vector<string>fizzbuzz(int A) {
    vector<string>res;
    for(int i=1;i<=A;i++) {
        if(i%3==0 and i%5==0) {
            res.push_back("FizzBuzz");
        }
        else if(i%3==0) {
            res.push_back("Fizz");
        }
        else if(i%5==0) {
            res.push_back("Buzz");
        } 
        else {
            ostringstream j;
            j<<i;
            res.push_back(string(j.str()));
        }
        
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    vector<string>s;
    s = fizzbuzz(n);
}
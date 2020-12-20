// Problem statement: https://www.interviewbit.com/problems/hotel-bookings-possible/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int i=0,c=0,j=0;
    while(i<arrive.size() and j<depart.size()) {
        if(arrive[i]<depart[j]) {
            i++;
            c++;
        }
        else {
            j++;
            c--;
        }
        if(c>K) {
            return false;
        }
    }
    return true;
}

int main() {
    int B=3;
    vector<int> A = {30, 12, 15, 2, 21, 12, 1, 31, 7, 40, 29, 6, 48, 19, 23, 10, 26, 6, 20, 44, 44, 34, 44, 38};
    vector<int> D = {36, 54, 47, 19, 66, 33, 41, 69, 23, 80, 64, 28, 93, 23, 62, 15, 49, 19, 58, 64, 60, 60, 57, 82};
    cout<<hotel(A,D,23);
    cout<<endl;
}
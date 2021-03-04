// Problem Statement: https://www.interviewbit.com/problems/integer-to-roman/
#include <bits/stdc++.h>
using namespace std; 
string getroman(int query) {
    switch (query) {
    case 1000: return "M";
    case 900: return "CM";
    case 500: return "D";
    case 400: return "CD";
    case 100: return "C";
    case 90: return "XC";
    case 50: return "L";
    case 40: return "XL";
    case 10: return "X";
    case 9: return "IX";
    case 5: return "V";
    case 4: return "IV";
    case 1: return "I";
    
    default:
        break;
    }
    return "";
}
string solve(int A) {
    vector<int>a = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string res;
    int i=0;
    while(A) {
        // 3999
        int tt = A/a[i],ss=tt;
        while(tt--) {
            res+=getroman(a[i]);
        }
        A-=(ss*a[i]);
        i++;
    }
    return res;
}

int main() 
{ 
    int q = 499;
    cout<<solve(q);
} 
// Problem statement: https://www.interviewbit.com/problems/valid-number/
#include<bits/stdc++.h>
using namespace std;
int solve(const string str) {
    int i = 0, j = str.length() - 1; 
  
    while (i < str.length() && str[i] == ' ') 
        i++; 
    while (j >= 0 && str[j] == ' ') 
        j--; 
  
    if (i > j) 
        return false; 
    if (i == j && !(str[i] >= '0' && str[i] <= '9')) 
        return false; 
    if (str[i] != '.' && str[i] != '+'
        && str[i] != '-' && !(str[i] >= '0' && str[i] <= '9')) 
        return false;  
    bool flagDotOrE = false; 
  
    for (i; i <= j; i++) { 
        if (str[i] != 'e' && str[i] != '.'
            && str[i] != '+' && str[i] != '-'
            && !(str[i] >= '0' && str[i] <= '9')) 
            return false; 
  
        if (str[i] == '.') { 
            if (flagDotOrE == true) 
                return 0; 
            if (i + 1 > str.length()) 
                return false;  
            if (!(str[i + 1] >= '0' && str[i + 1] <= '9')) 
                return false; 
        } 
  
        else if (str[i] == 'e') { 
            flagDotOrE = true; 
            if (!(str[i - 1] >= '0' && str[i - 1] <= '9')) 
                return false; 
            if (i + 1 > str.length()) 
                return false; 
            if (str[i + 1] != '+' && str[i + 1] != '-'
                && (str[i + 1] >= '0' && str[i] <= '9')) 
                return false; 
        } 
    } 
    return true; 
}

int main() {
    string A = ".+23";
    cout<<solve(A)<<endl;
}
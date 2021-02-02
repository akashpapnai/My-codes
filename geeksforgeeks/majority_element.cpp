// Problem statement: https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1/?track=SPC-Searching&batchId=135
#include<bits/stdc++.h>
using namespace std;
int majority_element(int a[],int size) {
    int count=1,majority_index = 0;
    for(int i=1;i<size;i++) {

        (a[majority_index]==a[i])?count++:count--;
        
        if(count==0) majority_index=i,count=1;
    }
    count=0;
    for(int i=0;i<size;i++) if(a[majority_index]==a[i]) count++;

    return (count>size/2)? a[majority_index] : -1;
}
int main() {
    int N = 5;
    int A[] = {1,3,2,3,2,3,3};
    cout<<majority_element(A,N)<<endl;
}
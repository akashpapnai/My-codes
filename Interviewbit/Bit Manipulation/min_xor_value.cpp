// Problem statement: https://www.interviewbit.com/problems/min-xor-value/
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr) {
    // [0 2 5 7]
    sort(arr.begin(),arr.end());
    int mini = INT_MAX;
    for(int i=0;i<arr.size()-1;i++) {
        mini = min(mini,arr[i] xor arr[i+1]);
    } 
    return mini;
}

struct TrieNode {
    int value;
    TrieNode* Child[2];
};
TrieNode* getNode() {
    TrieNode* newNode = new TrieNode;
    newNode->value = 0;
    newNode->Child[0] = newNode->Child[1] = NULL;
    return newNode;
}
void insert(TrieNode*root,int key) {
    TrieNode* temp = root;
    for(int i=32-1;i>=0;i--) {
        bool current_bit = key&(1<<i);

        if(temp->Child[current_bit]==NULL) 
            temp->Child[current_bit] = getNode();
        
        temp = temp->Child[current_bit];
    }
    temp->value = key;
}
int minXORUtil(TrieNode* root, int key) {
    TrieNode* temp = root;
    for(int i=32-1;i>=0;i--) {
        bool current_bit = key & (1<<i);

        if(temp->Child[current_bit]!=NULL) 
            temp=temp->Child[current_bit];
        
        else if(temp->Child[1-current_bit]!=NULL)
            temp = temp->Child[1-current_bit];
    }
    return key^temp->value;
}

int solve2(vector<int>&arr) {

    int min_xor = INT_MAX;
    TrieNode* root = getNode();
    insert(root,arr[0]);

    for(int i=1;i<arr.size();i++) {
        min_xor = min(min_xor,minXORUtil(root,arr[i]));
        insert(root,arr[i]);
    }
    return min_xor;
}
int main() {
    vector<int>arr={0, 2, 5, 7};
    cout<<solve(arr)<<endl;
    cout<<solve2(arr)<<endl;
}
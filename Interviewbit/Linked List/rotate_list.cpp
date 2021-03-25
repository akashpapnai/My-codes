// Problem statement: https://www.interviewbit.com/problems/rotate-list/

#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
    int data;
    ListNode*next;
};

ListNode*addListNode(ListNode*head,int n) {
    ListNode*ins = new ListNode();
    ins->data = n;
    ins->next = NULL;
    if(!head) {
        return ins;
    }
    ListNode*temp = head;
    while(temp->next) {
        temp = temp->next;
    }
    temp->next = ins;
    return head;
}

void display(ListNode*head) {
    if(!head) return;

    ListNode*temp = head;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

class Solution{
    public:
    ListNode* rotateRight(ListNode*A, int B);
};

ListNode* Solution::rotateRight(ListNode* A,int B) {
    int l = 0;
    ListNode *first = new ListNode();
    ListNode *curr = A;
    ListNode *head = A;
    first->next = head;
    ListNode *currprev = NULL;
    
    //find len of list
    while(curr){
        l++;
        currprev = curr; //points to last element of list after loop ends
        curr = curr->next;
    }
    if(l == 1) return A;
    curr = A;
    B = B % l; // when B > l
    if(!B) return A; //if B == 0 (remainder) return A as it is
    int trav = l - B - 1;
    while(trav--) curr = curr->next;
    first->next = curr->next; //points to start of sublist to be moved
    curr->next = NULL; //break connection btw list and the part that 
    // is bulkly moved to fron of list
    currprev->next = head;
    
    return first->next;
}

int main() {
    vector<int>ques = {85 , 4 , 29 , 28 , 89 , 65 , 59 , 34 , 71 , 47 , 55 , 80 , 35 , 52 , 20 , 88 , 44 , 3 , 99 , 62 , 77 , 63 , 42 , 17 , 58 , 38 , 75 , 92 , 36 , 68 , 15 , 43 , 9 , 19};
    ListNode*head = NULL;

    for(int i=0;i<ques.size();i++) head = addListNode(head,ques[i]);

    display(head);
    Solution s;
    ListNode*ans = s.rotateRight(head,91);
    display(ans);
}
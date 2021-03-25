// Problem statement: https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/

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
    ListNode* swapPairs(ListNode*A);
};

ListNode* Solution::swapPairs(ListNode* A) {
    ListNode *temp = new ListNode();
    temp->next = A;
    ListNode *curr = temp;
    while(curr->next != NULL && curr->next->next != NULL){
        ListNode *first = curr->next;
        ListNode *second = curr->next->next;
        
        first->next = second->next;
        curr->next = second;
        curr->next->next = first;
        curr = curr->next->next;
    }
    return temp->next;
}

int main() {
    vector<int>ques = {1,2,3,4,5,6};
    ListNode*head = NULL;

    for(int i=0;i<ques.size();i++) head = addListNode(head,ques[i]);

    display(head);
    Solution s;
    ListNode*ans = s.swapPairs(head);
    display(ans);
}
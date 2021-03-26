// Problem statement: https://www.interviewbit.com/problems/add-two-numbers-as-lists/

#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}

class Node{
    public:
    int data;
    Node*next;
};
class LinkedList {
    public:
    void addNode(int n);
    Node*getNode();
    private:
    Node* head=NULL;
};

Node* LinkedList::getNode() {
    return head;
}

void LinkedList::addNode(int n) {
    Node* temp = getNode();
    Node* ins = new Node();
    ins->data = n;
    ins->next = NULL;    
    if(!temp) {
        head = ins;
        return;
    }
    while(temp->next) temp = temp->next;
    temp->next = ins;
}

void display(Node*head) {
    Node*temp = head;
    if(!temp) return;
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

class Solution {
    public:
    Node*addTwoNumbers(Node*A,Node*B);
};

Node* Solution::addTwoNumbers(Node* A, Node* B) {
    int carry = 0;
    Node*prev = NULL,*temp1 = new Node(),*temp2 = new Node();
    temp1->next = A;
    temp2->next = B;
    A = temp1;
    B = temp2;
    
    while(A or B) {
        int add=0;
        if(A) add+=A->data;
        if(B) add+=B->data;
        add+=carry;
        carry = add/10;
        
        if(B){
            B->data = add%10;
            prev = B;
            B = B->next;
        }
        else if(A and !B){
            Node*ins = new Node();
            ins->data = add%10;
            ins->next = NULL;
            prev->next = ins;
            prev = prev->next;
        }
        if(A)  {
            A = A->next;
        }
    }
    if(carry) {
        Node*ins = new Node();
        ins->data = carry;
        ins->next = NULL;
        prev->next = ins;
    }
    return temp2->next;
}
int main() {

    send help

    auto start = high_resolution_clock::now();

    LinkedList ll1,ll2;
    vector<int>list1 = {9,9,9};
    vector<int>list2 = {1};
    for(int i=0;i<list1.size();i++) {
        ll1.addNode(list1[i]);
    }
    for(int i=0;i<list2.size();i++) {
        ll2.addNode(list2[i]);
    }
    display(ll1.getNode());
    display(ll2.getNode());
    Solution s;
    Node* ans = s.addTwoNumbers(ll1.getNode(),ll2.getNode());
    display(ans);

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(stop-start);

    cout<<"Time taken for execution is: "<<duration.count()<<" nanoseconds"<<endl;
}
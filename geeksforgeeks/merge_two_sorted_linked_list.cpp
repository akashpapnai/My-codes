#include<bits/stdc++.h>
using namespace std;
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
    Node*sortedMerge(Node* a, Node* b) {
        Node* ans;
        if(!a) return b;
        if(!b) return a;
        if(a->data<=b->data) {
            ans = a;
            ans->next = sortedMerge(a->next,b);
        }
        else {
            ans = b;
            ans->next = sortedMerge(a,b->next);
        }
        return ans;
    }
};

int main() {
    LinkedList ll1,ll2;
    vector<int>list1 = {5,10,15,20};
    vector<int>list2 = {2,3,20};
    for(int i=0;i<list1.size();i++) {
        ll1.addNode(list1[i]);
    }
    for(int i=0;i<list2.size();i++) {
        ll2.addNode(list2[i]);
    }

    Solution s;
    Node* ans = s.sortedMerge(ll1.getNode(),ll2.getNode());
    display(ans);
}
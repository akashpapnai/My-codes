// Problem Statement: https://www.interviewbit.com/problems/k-reverse-linked-list/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}

ll cnt[1005][1005][4];
ll ans;

class Node {
	public:
	int val;
	Node*next;
};

Node* addNode(Node*head, int n) {
	Node* createNew = new Node();
	createNew->val = n;
	createNew->next = NULL;

	if(!head) {
		head = createNew;
		return head;
	}
	
	Node* temp = head;
	while(temp->next) {
		temp = temp->next;
	}
	temp->next = createNew;
	return head;
}

void display(Node* head) {
	if(!head) {cout<<"List is empty"<<endl; return;}
	Node*temp = head;
	while(temp) {
		cout<<temp->val<<' ';
		temp = temp->next;
	}
	cout<<endl;
	return;
}

Node* solve(Node* A,int B) {
	
	if(B == 1)
        return A;
    
    int c = 1;
    Node *temp = A, *prev = A, *curr = A->next, *next, *head = NULL, *temp2 = NULL;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        c++;
        if(c % B == 0){
            head = !head ? prev : head;
            if(temp2)
                temp2->next = prev;
            temp2 = temp;
            temp = curr;
        }
    }
    
    temp2->next = NULL;
    
    return head;
}
int main() {
	send help
    Node*head = NULL;
	vector<int>add = {1,2,3,4,5,6};
	
	for(int i=0;i<add.size();i++) head = addNode(head,add[i]);
	
	display(head);
	Node* ans = solve(head,2);
	display(ans);
}
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void reverse(Node* &head,Node* curr,Node* prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}
Node* reverseLinkedList(Node *head){
    Node* prev=NULL;
	Node* curr = head;
	reverse(head,prev,curr);
}
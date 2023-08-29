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
Node* reverseLinkedList(Node *head){
    if(head==NULL || head->next==NULL){
		return head;
	}
    Node* prev = NULL;
    Node* forward = NULL;
    Node* curr = head;

    while(curr!=NULL){
        forward=curr->next;
        curr->next = prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

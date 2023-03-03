#include <bits/stdc++.h>

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node* getMid(Node* &head){
    Node* fast = head->next;
    Node* slow = head;

    while(fast!=NULL){
        fast = fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
Node *findMiddle(Node *head){
   return getMid(head);
}
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

Node *kReverse(Node *head, int k){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    int count = 0;

    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next!=NULL){
        head->next = kReverse(head,k);
    }
    return prev;
}
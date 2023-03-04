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

Node *uniqueSortedList(Node *head){
    Node* curr = head;
    while(curr!=NULL){
        if((curr->next!=NULL) && (curr->data == curr->next->data)){
            delete(curr->next);
            curr->next = curr->next->next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
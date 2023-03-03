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

Node* reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    Node* List = reverse(head->next);
    head->next->next = head;
    head->next= NULL;
    return List;
}
Node* reverseLinkedList(Node *head){
    reverse(head);
}

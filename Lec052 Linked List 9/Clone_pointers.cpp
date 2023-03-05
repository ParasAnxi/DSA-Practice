#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *arb;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->arb = NULL;
    }
};
void insertAtTail(Node* &head,Node* &tail ,int data){
    Node* temp = new Node(data);
    if(head==NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}
Node *copyList(Node *head){
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    Node* temp = head;

    while(temp!=NULL){
        insertAtTail(cloneHead,cloneTail,temp->data);
        temp=temp->next;
    }

    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode!=NULL && cloneNode!=NULL){
        Node* next = originalNode->next; 
        originalNode->next = cloneNode;
        originalNode = next;

        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }
    temp = head;
    while(temp!=NULL){
        if(temp->next!=NULL){
            temp->next->arb = temp->arb ? temp->arb->next : temp->arb; 
        }
        temp = temp->next->next;
    }
    originalNode = head;
    cloneNode = cloneHead;
    while(originalNode!=NULL && cloneNode!=NULL){
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;
        if(originalNode!=NULL){
            cloneNode->next=originalNode->next;
        }
        cloneNode = cloneNode->next;
    }
    return cloneHead;
}
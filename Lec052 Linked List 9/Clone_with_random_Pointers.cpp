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

    unordered_map<Node* , Node*> oldToNewNode;
    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode!=NULL && cloneNode!=NULL){
        oldToNewNode[originalNode] = cloneNode;
        originalNode=originalNode->next;
        cloneNode=cloneNode->next;
    }
    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode!=NULL){
        cloneNode->arb = oldToNewNode[originalNode->arb];
        originalNode=originalNode->next;
        cloneNode=cloneNode->next;
    }
    return cloneHead;
}
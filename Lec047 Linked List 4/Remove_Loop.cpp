#include<bits/stdc++.h>
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

Node* floydDL(Node* tail){
    if(tail==NULL){
        return NULL;
    }
    Node* slow = tail;
    Node* fast = tail;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if (slow == fast){
            return slow;
        }
    }
    return NULL;
}
Node* getStartingNode(Node* tail){
    if(tail==NULL){
        return NULL;
    }
    Node* intersection(floydDL(tail));
    if(intersection==NULL){
        return NULL;
    }

    Node* slow = tail;

    while(slow!=intersection){
        slow = slow->next;
        intersection=intersection->next;
    }
    return slow;
}

Node *removeLoop(Node *head)
{
    if(head==NULL){
        return NULL;
    }
    Node* start = getStartingNode(head);
    if(start==NULL){
        return head;
    }
    Node* temp = start;
    while(temp->next!= start){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}
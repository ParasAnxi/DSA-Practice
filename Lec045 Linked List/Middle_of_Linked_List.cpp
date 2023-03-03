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
int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
Node *findMiddle(Node *head){
    int length = getLength(head);
    int ans = length/2;
    int cnt = 0;
    Node* temp = head;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}
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
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* next1 = NULL;
    Node* curr = head;
    while(curr!=NULL){
        next1 = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next1;
    }
    return prev;
}

 bool isPalindrome(Node *head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    Node* mid = getMid(head);
    Node* temp = mid->next;
    mid->next = reverse(temp);

    Node* head1 = head;
    Node* head2 = mid->next;

    while(head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        else{
            head1=head1->next;
            head2=head2->next;
        }
    }
    return true;
 }
#include <bits/stdc++.h>
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node* merge(Node* left ,Node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left=left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left!=NULL){
        temp->next = left;
        temp = left;
        left=left->next;
    }
    while(right!=NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans -> next;
    return ans;
}
Node* mergeSort(Node *head){
    if(head==NULL && head->next==NULL){
        return head;
    }
    Node* mid = getMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    Node* ans = merge(left,right);
    return ans;
}
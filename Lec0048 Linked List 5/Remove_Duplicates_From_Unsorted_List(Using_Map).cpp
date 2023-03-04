#include <bits/stdc++.h>
using namespace std;
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

Node *removeDuplicates(Node *head){
    unordered_map<int,bool>v;
    Node* curr=head;
    while(curr->next!=NULL){
        v[curr->data]=true;
        if(v[curr->next->data]==true){
            Node* next_next=curr->next->next;
            Node* nodetodelete=curr->next;
            delete(nodetodelete);
            curr->next=next_next;
        }
        else
            curr=curr->next;
    }
    return head;
}

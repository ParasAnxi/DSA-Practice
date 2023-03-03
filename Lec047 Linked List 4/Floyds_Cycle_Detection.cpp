#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        while(this->next!=NULL){
            delete next;
            next=NULL;
        }cout<<"MEMORY FREE : "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int data){
    if(tail==NULL){
        Node* node = new Node(data);
        tail = node;
        node->next = node;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr -> next;
        curr->next = temp;
    }
}
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
            cout<<"Present at : "<<slow->data<<endl;
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
    Node* slow = tail;

    while(slow!=intersection){
        slow = slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void removeLoop(Node* tail){
    if(tail==NULL){
        return ;
    }
    Node* start = getStartingNode(tail);
    Node* temp = start;
    while(temp->next!= start){
        temp=temp->next;
    }
    temp->next=NULL;
}
void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"LIST EMPTY"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next; 
    }while(tail!= temp);
cout<<endl;
}
int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    insertNode(tail,3,5);
    insertNode(tail,5,7);
    insertNode(tail,5,10);
    insertNode(tail,5,13);
    // deleteNode(tail,3);
    // deleteNode(tail,5);
    // deleteNode(tail,13);
    // deleteNode(tail,7);
    // cout<<"Tail : "<<tail->data<<endl;
    
    print(tail);
    if(floydDL(tail)!=NULL){
        cout<<"Circular"<<endl;
    }
    else{
        cout<<"Not circular"<<endl;
    }
    Node* loop = getStartingNode(tail);
    cout<<"Present at : " <<loop->data<<endl;
    removeLoop(tail);
     if(floydDL(tail)!=NULL){
        cout<<"Circular"<<endl;
    }
    else{
        cout<<"Not circular"<<endl;
    }
}
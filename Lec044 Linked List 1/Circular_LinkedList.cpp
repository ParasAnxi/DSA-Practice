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
void deleteNode(Node* &tail,int element){
    if(tail == NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    else{
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data!=element){
        prev = curr;
        curr=curr->next;
    }
    prev -> next = curr -> next;
    if(curr==prev){
        tail = NULL;
    }
    if(tail == curr){
        tail = prev;
    }
    curr -> next = NULL;
    delete curr;
    }
}
bool isCircular(Node *tail){
    if(tail==NULL){
        return true;
    }
    Node* temp = tail->next;
    while(temp!=NULL && temp!=tail){
        temp = temp->next;
    }
    if(temp==tail){
        return true;
    }
    return false;
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
    cout<<"Tail : "<<tail->data<<endl;
    
    print(tail);
    if(isCircular(tail)){
        cout<<"Circular"<<endl;
    }
    else{
        cout<<"Not circular"<<endl;
    }
}
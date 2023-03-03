#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
        ~Node(){
            int value = this->data;
            if(next!=NULL){
                delete next;
                next=NULL;
            }
            cout<<"MEMORY FREE : "<<value<<endl;
        }
};
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}
void insertAtHead(Node* &head , Node* &tail, int data){
    if(head==NULL){
        Node* node = new Node(data);
        head = node;
        tail = node;
    }
    else{
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

void insertAtTail(Node* &head ,Node* &tail,int data){
    if(tail==NULL){
        Node* node = new Node(data);
        tail = node;
        head = node;
    }
    else{
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = tail->next; //tail = temp
    }
}

void insertAtPosition(Node* &head,Node* &tail ,int position,int data){
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    else{
        Node* temp = head;
        int count = 1;
        while(count<position-1){
            temp = temp->next;
            count++;
        }
        if(temp->next == NULL){
            insertAtTail(head,tail,data);
        }
        Node* nodeToInsert = new Node(data);
        nodeToInsert->next = temp->next;
        temp->next->prev = nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert->prev = temp; 
    }
}

void deleteNode(Node* & head,Node* &tail,int position) { 

    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr->next == NULL){
        tail = prev;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}
int main(){
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,21);
    insertAtHead(head,tail,22);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,31);
    insertAtPosition(head,tail,3,99);
    cout<<"Length : "<<getLength(head)<<endl;
    deleteNode(head,tail,6);
    print(head);
    cout<<"Length : "<<getLength(head)<<endl;
    cout<<"Head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
}
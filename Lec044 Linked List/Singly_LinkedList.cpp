#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"MEMORY FREE of : "<<value<<endl;
    }
};
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next=temp;
    tail = tail->next; //tail = temp
}

void insertAtPosition(Node* &head ,Node* &tail,int position,int data){
    if(position==1){
        return insertAtHead(head,data);
    }

    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,data);
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp = head;
        head= head->next;
        temp-> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
            prev->next = curr->next;
            curr->next = NULL;
            if(prev->next == NULL){
                tail = prev;
            }
            delete curr;
    }
}
void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,20);
    insertAtHead(head,21);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtPosition(head,tail,1,22);
    deleteNode(head,tail,6);
    print(head);
    cout<<"Head data : "<<head->data<<endl;
    cout<<"Tail data : "<<tail->data<<endl;
}
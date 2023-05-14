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
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* node = new Node(data);
        head = node;
        tail = node;
    }
    else{
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    }
}

void insertAtTail(Node*&head , Node* &tail,int data){
    if(tail==NULL){
        Node* node = new Node(data);
        tail = node;
        head = node;
    }
    Node* temp = new Node(data);
    tail->next=temp;
    tail = tail->next; //tail = temp
}

void insertAtPosition(Node* &head ,Node* &tail,int position,int data){
    if(position==1){
        return insertAtHead(head,tail,data);
    }

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
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp -> next;
    }
    return len;
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
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,21);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtPosition(head,tail,1,22);
    deleteNode(head,tail,6);
    print(head);
    cout<<"Length : "<<getLength(head)<<endl;
    cout<<"Head data : "<<head->data<<endl;
    cout<<"Tail data : "<<tail->data<<endl;
}
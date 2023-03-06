#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack{
    Node* top;
    public:
    Stack() {
        top = NULL;
    }
    
    void push(int data){
        Node* node1 = new Node(data);
        if(!node1){
            cout<<"Stack Overflow"<<endl;
        }
        node1->data = data;
        node1->next = top;
        top = node1;
    }
    bool isEmpty(){
        return top == NULL;
    }
    int peek(){
        if (!isEmpty())
        return top->data;
    }
     void pop(){
        Node* temp;
  
        if (top == NULL) {
            cout << "Stack Underflow" << endl;
        }
        else {
            temp = top;
            top = top->next;
            delete(temp);
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"Top : "<<s.peek()<<endl;
    s.pop();
    cout<<"Top : "<<s.peek()<<endl;
    s.pop();
    cout<<"Top : "<<s.peek()<<endl;
    s.pop();
    cout<<"Top : "<<s.peek()<<endl;
    cout<<"Top : "<<s.peek()<<endl;
    if(s.isEmpty()){
        cout<<"Empty Stack"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
}
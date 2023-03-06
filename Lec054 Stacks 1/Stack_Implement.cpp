#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overFlow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
        return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main(){
    int size = 5;
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<"Top : "<<st.peek()<<endl; 
    st.pop();

    cout<<"Top : "<<st.peek()<<endl; 
    st.pop();

    cout<<"Top : "<<st.peek()<<endl; 
    st.pop();

    cout<<"Top : "<<st.peek()<<endl; 

    if(st.isEmpty()){
        cout<<"Empty Stack"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
}
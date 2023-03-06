#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    cout<<"Top element : " << s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    s.pop();
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}
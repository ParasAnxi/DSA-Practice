#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string> s;
    s.push("Paras");
    s.push("Anxi");
    s.push("Kakoi");
    cout<<"Top : "<<s.top()<<endl;
    s.pop();
    cout<<"Top : "<<s.top()<<endl;
    cout<<"Size : "<<s.size()<<endl;
    cout<<"Empty : "<<s.empty()<<endl;
}
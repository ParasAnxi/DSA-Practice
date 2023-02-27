#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<string> q;

    q.push("Paras");
    q.push("Anxi");
    cout<<"Size : "<<q.size()<<endl;
    cout<<"At front : "<<q.front()<<endl;
    cout<<"At back : "<<q.back();
}
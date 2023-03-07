#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    cout<<"Size : "<<q.size()<<endl; 
    q.pop();
    cout<<"Size : "<<q.size()<<endl; 
    cout<<q.empty()<<endl;
    cout<<"Front : "<<q.front()<<endl;
}
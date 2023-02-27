#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(3);

    for(auto i: l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    for(auto i: l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size : "<<l.size()<<endl;

    list<int> l2(l);
    for(auto i: l2){
        cout<<i<<" ";
    }cout<<endl;
    list<int> l3(5,10);
    for(auto i: l3){
        cout<<i<<" ";
    }cout<<endl;
}
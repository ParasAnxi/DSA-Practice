#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(10);
    d.push_front(20);
    
    for(auto i : d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    cout<<"After pop : ";
    for(auto i : d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();
    cout<<"After pop : ";
    for(auto i : d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Element at : "<<d.at(1)<<endl;
    cout<<"Empty : "<<d.empty()<<endl;
    d.erase(d.begin(),d.begin()+2);
    cout<<"Size is " <<d.size()<<endl;
}
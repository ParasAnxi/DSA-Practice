#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Element at index 2 : "<<v.at(2)<<endl;

    for(auto x : v){
        cout<<x<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After pop : ";
    for(auto x : v){
        cout<<x<<" ";
    }cout<<endl;
    v.clear();
    cout<<"After clear : ";
    for(auto x : v){
        cout<<x<<" ";
    }cout<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;

    vector<int>v2(5,1000);
    for(auto x : v2){
        cout<<x<<" ";
    }cout<<endl;

    vector<int> last(v2);
    for(auto x : last){
        cout<<x<<" ";
    }cout<<endl;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//O(1)
int main(){
    int basic[5]={1,2,3,4,5};
    array<int,4> a={1,2,3,4};

    for(auto i:a){
        cout<<i<<" ";
    }cout<<endl;
    int size = a.size();
    cout<<"Size of array is : "<<size<<endl;
    cout<<"Element at index 2 is : "<<a[2]<<endl;
    cout<<"Element at index 3 is : "<<a.at(3)<<endl;
    cout<<"Empty or Not : "<<a.empty()<<endl; 
    cout<<"First Element : "<<a.front()<<endl;
    cout<<"Last Element : "<<a.back()<<endl;
    
}
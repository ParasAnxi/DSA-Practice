#include<bits/stdc++.h>
using namespace std;


int main(){
    priority_queue<int> maxHeap; //max heap
    priority_queue<int, vector<int> ,greater<int>> minHeap;//min heap

    maxHeap.push(1);
    maxHeap.push(0);
    maxHeap.push(2);
    maxHeap.push(3);
    cout<<"Size : "<<maxHeap.size()<<endl;
    int n = maxHeap.size();
    for(int i = 0; i< n;i++){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }cout<<endl;

    minHeap.push(3);
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(1);
    cout<<"Size : "<<minHeap.size()<<endl;
    int n1 = minHeap.size();
    for(int i = 0; i< n1;i++){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }cout<<endl;
}
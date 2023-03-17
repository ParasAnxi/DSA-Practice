#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;
    
    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int data){
        size = size + 1;
        int index = size;
        arr[index] = data;

        while(index>1){
            int parent = index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i = 1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deleteNode(){
        if(size == 0){
            cout<<"Empty"<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i<size){
            int leftInd = 2*i;
            int rightInd = 2*i+1;

        if(leftInd < size && arr[i]<arr[leftInd]){
            swap(arr[i],arr[leftInd]);
            i = leftInd;
        }
        else if(rightInd < size && arr[i] < arr[rightInd]){
            swap(arr[i],arr[rightInd]);
        }
        else{
            return;
        }
    }
}
};
int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    cout<<endl;
    h.deleteNode();
    h.print();
    cout<<endl;
    h.deleteNode();
    h.print();
}
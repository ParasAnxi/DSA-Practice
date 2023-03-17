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

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right<n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int main(){
    Heap h;
    int arr[6] = {-1 , 54 ,53 ,55,52,50};
    int n = 5;
    for(int i = n/2 ;i>0 ;i--){
        heapify(arr,n,i);
    }
    for(int i = 1; i<=n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
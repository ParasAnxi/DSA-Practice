#include<iostream>
using namespace std;

int bubbleSort(int *arr, int n){
    for(int i = 0;i<n-1;i++){
        for(int j= i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    int arr[5]={3,2,1,4,5};
    bubbleSort(arr,5);
    for(auto x:arr){
        cout<<x<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

int minIndex(int *arr, int i,int j){
    if(i==j) return i;
    int k = minIndex(arr,i+1,j);
    return (arr[i]<arr[k])?i:k;
}
void selectionSort(int *arr , int n ,int i=0){
    if(i==n) return;
    int k = minIndex(arr,i,n-1);
    if(k!=i) {
    swap(arr[i],arr[k]);
    }
    selectionSort(arr,n,i+1);
}
int main(){
    int arr[6] = {1,6,5,3,2,4};
    selectionSort(arr,6);
    for(auto i : arr){
    cout<<i<<" ";
    }
}
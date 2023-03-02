#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr,int n){
    if(n<=1) return;
    insertionSort(arr,n-1);
    int last = arr[n-1];
    int j =n-2;
    while(j>=0 && arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
int main(){
    int arr[6]={1,4,6,2,3,5};
    insertionSort(arr,6);
    for(auto i: arr)
    cout<<i<<" ";
}
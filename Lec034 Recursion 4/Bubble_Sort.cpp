#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr,int n){
    int i = 0;
    if(n==0 || n==1) return ;
    bool swaped = false;
    while(i<n-1){
    if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    i++;
    bool swaped = true;
    }
    if(swaped) return;
    bubbleSort(arr+1,n-1);
}
int main(){
    int arr[6]={1,4,6,2,3,5};
    bubbleSort(arr,6);
    for(auto i: arr)
    cout<<i<<" ";
}
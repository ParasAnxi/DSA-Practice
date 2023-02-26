#include<iostream>
using namespace std;

int pivot(int *arr,int s , int e){
    int mid=s+(e-s)/2;
    if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
        return arr[mid];
    }
    else if(arr[mid]>=arr[0]){
        return pivot(arr,mid+1,e);
    }
    else{
        return pivot(arr,s,mid);
    }
}
int main(){
    int arr[6]={0,1,2,3,4,5};
    int n = 5;
    cout<<pivot(arr,0,n-1);
}
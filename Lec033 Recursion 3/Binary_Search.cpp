#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr,int s ,int e , int k){
    int mid = s+(e-s)/2;
    if(s>e) return -1;
    else if(arr[mid]==k) return mid;
    else if(arr[mid]>k) return binarySearch(arr,s,mid-1,k);
    else return binarySearch(arr,mid+1,e,k);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5;
    cout<<binarySearch(arr,0,n-1,9);
}
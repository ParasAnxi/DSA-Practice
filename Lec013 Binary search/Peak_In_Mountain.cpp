#include<iostream>
using namespace std;

int peak(int *arr, int s ,int e){
    int mid = s+(e-s)/2;
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
        return arr[mid];
    }
    else if(arr[mid]>arr[mid+1]){
        return peak(arr,s,mid);
    }
    else{
        return peak(arr,mid+1,e);
    }
}
int main(){
    int arr[5]={1,2,3,2,1};
    int s = 0;
    int e = 5-1;
    int ans = peak(arr,s,e);
    cout<<"Peak of Element is : "<<ans<<endl;
}
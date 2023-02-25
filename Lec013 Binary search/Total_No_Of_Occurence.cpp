#include<iostream>
using namespace std;

int firstOcc(int *arr,int size , int key){
    int s=0;
    int e=size-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int *arr,int size , int key){
    int s=0;
    int e=size-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[10]={1,2,3,3,3,3,3,3,3,5};
    int ans = (lastOcc(arr,10,3)-firstOcc(arr,10,3))+1;
    cout<<"Total no of occurence is : "<<ans<<endl;
}
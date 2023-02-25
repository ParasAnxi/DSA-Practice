#include<iostream>
#include<limits.h>
#include<algorithm>
#include<math.h>
using namespace std;

int getMin(int *arr,int n){
    int mini = INT_MAX;
    for(int i = 0 ; i<n ; i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}

int getMax(int *arr,int n){
    int maxi = INT_MIN;
    for(int i = 0 ; i<n ; i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"The minimum Element is : " << getMin(arr,5)<<endl;
    cout<<"The maximum Element is : " << getMax(arr,5)<<endl;
}
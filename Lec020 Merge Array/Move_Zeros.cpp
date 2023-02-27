#include<bits/stdc++.h>
using namespace std;

void moveZeros(int *arr,int n){
    int i = 0;
    for(int j = 0; j<n; j++)
        {
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main(){
    int arr[5]={0,2,0,1,6};
    moveZeros(arr,5);

    for(auto i : arr){
        cout<<i<<" ";
    }
}
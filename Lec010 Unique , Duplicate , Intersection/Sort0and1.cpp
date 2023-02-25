#include<iostream>
#include<algorithm>
using namespace std;

int sort01(int *arr,int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        while(arr[s]==0  && s<e){
            s++;
        }
        while(arr[e]==1 && s<e){
            e--;
        }
        swap(arr[s],arr[e]);
        s++;
        e--;   
    }
}
int main(){
    int arr[6]={1,1,1,0,0,1};
    int n = 6;
    sort01(arr,6);
    for(int i = 0 ;i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
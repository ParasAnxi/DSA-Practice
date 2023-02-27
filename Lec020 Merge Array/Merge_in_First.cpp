#include<bits/stdc++.h>
using namespace std;

void merge(int *arr1 ,int *arr2 , int n , int m){
    int i=0;
    int j=0;
    vector<int> v(n+m);
    int k =0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            v[k++]=arr1[i++];
        }
        else{
            v[k++]=arr2[j++];
        }
    }
    while(i<n){
        v[k++]=arr1[i++];
    }
    while(j<m){
        v[k++]=arr2[j++];
    }
    for(int i =0 ;i<n+m;i++){
        arr1[i]=v[i];
    }
}
int main(){
    int arr1[5]={1,2};
    int arr2[5]={2,5,6};
    merge(arr1,arr2,2,5);
    for(auto i : arr1){
        cout<<i<<" ";
    }
}
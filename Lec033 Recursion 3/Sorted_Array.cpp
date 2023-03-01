#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int n){
    if(n==0 || n==1) return 1;
    if(arr[0]>arr[1]) return 0;

    bool ans = isSorted(arr+1,n-1); 
    return ans;
}
int main(){
    int arr[5]={1,2,3,4,10};
    if(isSorted(arr,5)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
}
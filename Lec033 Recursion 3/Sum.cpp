#include<bits/stdc++.h>
using namespace std;

int sum(int *arr,int n){
    if(n==0) return 0;
    if(n==1) return arr[0];

    int ans=arr[0] + sum(arr+1,n-1);

    return ans;
}
int main(){
    int arr[5]={10,20,30,40,50};
    cout<<sum(arr,5);
}
#include<bits/stdc++.h>
using namespace std;

void colSum(int arr[][3],int i ,int j){
     for(int j = 0 ; j<3 ; j++){
        int sum = 0;
        for(int i = 0; i<3 ;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
     }
}
int main(){
    int arr[3][3];
    cout<<"Enter the Elements : ";
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0; j<3 ;j++){
            cin>>arr[i][j];
        }
    }
    colSum(arr,3,3);
}
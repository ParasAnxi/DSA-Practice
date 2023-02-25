#include<iostream>
using namespace std;

int linearSearch(int *arr, int size , int key){
    for(int i=0; i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    if(linearSearch(arr,9,3)){
        cout<<"Key Found"<<endl;
    }
    else{
        cout<<"Key not Found"<<endl;
    }
}
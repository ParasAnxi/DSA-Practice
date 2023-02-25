#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements in the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the Key to Insert : ";
    cin>>key;
    int position;
    cout<<"Enter the Position : ";
    cin>>position;
    n++;
    for(int i=n;i>=position;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=key;
    cout<<"After insertion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
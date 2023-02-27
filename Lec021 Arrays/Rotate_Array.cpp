#include<bits/stdc++.h>
using namespace std;

int rotateArray(vector<int> &arr, int n ,int k){
    vector<int> v(arr.size());
    for(int i=0;i<n;i++){
        v[(i+k)%n]=arr[i];
    }
    arr=v;
}
int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int n = 5;
    rotateArray(arr,5,2);
    for(auto i: arr){
        cout<<i<<" ";
    }
}
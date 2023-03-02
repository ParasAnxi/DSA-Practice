#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = count + s;
    swap(arr[s],arr[pivotIndex]);

    int i = s , j = e;
    while(i<pivotIndex && j > pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j >pivotIndex){
            swap(arr[i++],arr[j--]);
        }
        return pivotIndex;
    }
}
void quickSort(int *arr, int s,int e){
    if(s>=e) return;
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[7]={7,3,4,5,6,1,2};
    quickSort(arr,0,7-1);
    for(auto i : arr){
        cout<<i<<" ";
    }
}
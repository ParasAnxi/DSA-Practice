#include <bits/stdc++.h>
using namespace std;

int merge(int *arr1, int *arr2, int n, int m, int *arr3)
{
    int i =0 , j =0;
    int k =0;
    while(i<n && j<m){
            if (arr1[i] < arr2[j]){
                arr3[k++] = arr1[i++];
            }
            else{
                arr3[k++] = arr2[j++];
            }
        }
        while(i<n){
                arr3[k++] = arr1[i++];
        }
        while(j<m){
            arr3[k++]=arr2[j++];
        }
    }

int main()
{
    int arr[5]={1,2,3,4,5};
    int arr1[5]={6,7,8,9,10};
    int arr2[10];
    merge(arr,arr1,5,5,arr2);
    for(auto i: arr2){
        cout<<i<<" ";
    }cout<<endl;
}
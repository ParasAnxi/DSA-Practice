#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int zero =0, one = 0 , two =0;
   for(int i = 0 ; i<n;i++){
      if(arr[i]==0){
         zero++;
      }
      else if(arr[i]==1){
         one++;
      }
      else if(arr[i]==2){
         two++;
      }
   }
   for(int i = 0 ; i< n;i++){
      if(zero!=0){
         arr[i]=0;
         zero--;
      }
      else if(one!=0){
         arr[i]=1;
         one--;
      }
      else if(two!=0){
         arr[i]=2;
         two--;
      }
   }
}
int main(){
    int arr[12]={1,2,2,2,0,0,0,1,2,1,1,1};
    sort012(arr,12);
    for(auto x : arr){
        cout<<x<<" ";
    }
}
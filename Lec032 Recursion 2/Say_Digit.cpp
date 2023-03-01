#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n,string *k){
    if(n==0) return;
    int digit = n%10;
    n=n/10;
    sayDigit(n,k);
    cout<<k[digit]<<" ";
}
int main(){
    int n = 513;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigit(n,arr);
}
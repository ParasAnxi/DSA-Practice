#include<bits/stdc++.h>
using namespace std;

int power(int n){
    if(n==0) return 1;
    else return 2*power(n-1);
}
int main(){
    int n = 3;
    cout<<power(n);
}
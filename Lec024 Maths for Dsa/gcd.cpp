#include<bits/stdc++.h>
using namespace std;
//Euclid Algorithm
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a = 72;
    int b = 24;

    cout<<gcd(a,b);
}
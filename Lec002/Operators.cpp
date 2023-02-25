#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
int mul(int a,int b){
    int c=a*b;
    return c;
}
int diff(int a,int b){
    int c=a-b;
    return c;
}
int modo(int a,int b){
    int c=a%b;
    return c;
}
int divide(int a,int b){
    int c=a/b;
    return c;
}
int main(){
    int a=9,b=8;
    cout<<sum(a,b)<<endl;
    cout<<mul(a,b)<<endl;
    cout<<modo(a,b)<<endl;
    cout<<divide(a,b)<<endl;
    cout<<diff(a,b)<<endl;
}
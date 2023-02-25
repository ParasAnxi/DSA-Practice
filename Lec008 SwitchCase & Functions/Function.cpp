#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1)
        return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter A number to find Factorial : ";
    cin>>n;
    cout<<"Factorial of Number is : ";
    cout<<factorial(n);
}
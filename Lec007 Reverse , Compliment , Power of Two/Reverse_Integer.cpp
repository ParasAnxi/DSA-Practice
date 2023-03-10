#include<iostream>
#include<limits.h>
using namespace std;

int reverseInteger(int &n){
    int ans = 0;
    while(n!=0){
        int digit = n % 10;
        if((ans > INT_MAX/10) || ans < (INT_MIN/10)){
            return 0;
        }
        ans = (ans*10)+digit;
        n=n/10;
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter a Integer : ";
    cin>>n;
    cout<<"Reverse Integer is : ";
    reverseInteger(n); 
}
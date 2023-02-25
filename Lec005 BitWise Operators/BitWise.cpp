#include<iostream>
using namespace std;

int main(){
    int a=7,b=6;

    cout<<"And of two Numbers is : "<< (a&b) <<endl;
    cout<<"OR of two Numbers is : "<< (a|b) <<endl;
    cout<<"Not of Number is : "<< (~a) <<endl;
    cout<<"Not of Number is : "<< (~b) <<endl;
    cout<<"XOR of two Numbers is : "<< (a^b) <<endl;
    cout<<"Left Shift : "<<(a<<1)<<endl;
    cout<<"Right Shift : "<<(a>>1)<<endl;
}
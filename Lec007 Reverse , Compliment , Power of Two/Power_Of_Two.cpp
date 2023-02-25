#include<iostream>
#include<math.h>
using namespace std;
//Constraints: -2^31 <= n <= 2^31 - 1
bool powerOfTwo(int n){
    for(int i = 0; i <= 30; i++){
        if(pow(2,i) ==n ){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter a Number to check for Power of Two : ";
    cin>>n;
    if(powerOfTwo(n)){
        cout<<"Power of Two"<<endl;
    }
    else{
        cout<<"Not a power of two"<<endl;
    }
}
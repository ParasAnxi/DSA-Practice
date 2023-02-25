#include<iostream>
using namespace std;

void loop(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    loop(n);
}
#include<iostream>
using namespace std;


int main(){
int n = 5;

for(int i=1;i<=n-1;i++){

    for(int j=1;j<=i;j++)
        cout<<" ";
    for(int j=1;j<=n-i;j++)
            cout<<i+j-1;
        cout<<'\n';
}
}

#include<iostream>
using namespace std;


int main(){
int n=3;

int i=1;
int count=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count;
        j++;
        count++;
    }
    i++;
    cout<<endl;
}
}
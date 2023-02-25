#include<iostream>
using namespace std;

int main(){
    int a=10 , b=5;
    int choice;
    cout<<"Enter your choice"<<endl;
    cout<<"1 - for Addition\n2 - for Substraction\n3 - for Division\n4 - for Multipication : ";
    cin>>choice;
    switch(choice){
        case 1 :
        cout<<"Addition is "<<(a+b)<<endl;
        break;
        case 2 :
        cout<<"Substraction is "<<(a-b)<<endl;
        break;
        case 3 :
        cout<<"Division is "<<(a/b)<<endl;
        break;
        case 4 :
        cout<<"Multipication is "<<(a*b)<<endl;
        break;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;
    cout<<"Value of i is : "<<i<<endl; //10
    cout<<"Address of i is : "<<&i<<endl; //0x61ff0c
    cout<<"Value of Pointer is : "<<*p<<endl; //10
    cout<<"Adress stored in pointer is : "<<p<<endl;; //0x61ff0c
    cout<<"Address of Pointers : "<<&p<<endl;; //0x61ff08
    
    int num  = 5 ;

    cout << num << endl;

    // address of Operator - &

    cout <<"Address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;

}

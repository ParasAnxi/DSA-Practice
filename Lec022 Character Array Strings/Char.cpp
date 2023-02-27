#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[24];
    cout<<"Enter String : ";
    cin>>name;
    cout<<"String is : "<<name<<endl;
    cout<<"Length of string is : "<<getLength(name)<<endl;
}
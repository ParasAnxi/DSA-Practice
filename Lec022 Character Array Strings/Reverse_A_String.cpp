#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int reverse(char name[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        swap(name[i++],name[j--]);
    }
}
int main(){
    char name[10]="ixna";
    int n = getLength(name);
    reverse(name,n);
    cout<<name<<endl;
    
}
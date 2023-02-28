#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int isPalindrome(char *arr ,int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    char str[20]="isthissihtsi";
    int n = getLength(str);
    if(isPalindrome(str,n)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not plaindrome"<<endl;
    }

}
#include<bits/stdc++.h>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char low = ch - 'A' + 'a';
        return low;
    }
}
char toUpperCase(char ch){
    if(ch>='A' && ch<='Z'){
        return ch;
    }
    else{
        char low = ch - 'a' + 'A';
        return low;
    }
}
int toNum(char ch){
    if(ch>=0 && ch<=9){
        ch - '0';
    }
        return ch;
}
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

    cout<<"CHARACTER IS "<<toLowerCase('P')<<endl;;
    cout<<"character is "<<toUpperCase('a')<<endl;;
    cout<<"To num is "<<toNum('9');

}
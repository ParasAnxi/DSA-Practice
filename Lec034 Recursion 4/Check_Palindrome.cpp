#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s,int i ,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    return checkPalindrome(s,i+1,j-1);
}
int main(){
    string x = "good doog";
    if(checkPalindrome(x,0,x.length()-1))
    cout<<"Palindrome";
    else
    cout<<"Not palindrome"<<endl;
    
}
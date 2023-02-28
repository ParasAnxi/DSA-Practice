#include <bits/stdc++.h> 
using namespace std;

string toLC(string s){

    int start=0;
    int end=s.size()-1;
    string str="";

    while(start<=end){
        if(s[start]>='a' && s[start]<='z' || s[start]>='0' && s[start]<='9'){
            str+=s[start++];
        }
        else if(s[start]>='A'&&s[start]<='Z'){
            str+=s[start++]-'A'+'a';
        }
        else{
            start++;
        }
    }
return str;
}

bool checkPalindrome(string s)
{
    string z = toLC(s);
    int st=0;
    int end=z.size()-1;
    bool f=true;

    while(st<=end){
        if(z[st]!=z[end]){
            f=false;
            break;
        }
        else{
            st++;
            end--;
        }
    }
    return f;
}
int main(){
    string s = "@a*^/nX$i i@x*&#na";
    if(checkPalindrome(s)){
        cout<<"String is Palindrome";
    }
    else{
        cout<<"String is not palindrome";
    }

}
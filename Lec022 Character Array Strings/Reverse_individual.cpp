#include<bits/stdc++.h>
using namespace std;

int reverse(string s){
    stack<char> str;
    for(int i = 0; i<s.length();++i){
        if(s[i]!=' ')
        str.push(s[i]);
        //space print stack
    else{
        while(str.empty()==false){
            cout<<str.top();
            str.pop();
        }
        cout<<" ";
    }
}
//for space after last word
while(str.empty()==false){
    cout<<str.top();
    str.pop();
}
}
int main(){
    string str = "This is not good";
    reverse(str);
}
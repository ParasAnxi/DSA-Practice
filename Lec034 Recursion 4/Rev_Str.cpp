#include<bits/stdc++.h>
using namespace std;

void reverseStr(string& s,int i ,int j){
    if(i>j) return;
    swap(s[i],s[j]);
    reverseStr(s,i+1,j-1);
}
int main(){
    string s = "iiawak nahc akoT";
    int i = 0;
    int j = s.length()-1;
    reverseStr(s,i,j);
    cout<<s; 
}
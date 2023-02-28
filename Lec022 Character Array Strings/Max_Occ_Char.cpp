#include<bits/stdc++.h>
using namespace std;

char maxOcc(string s){
    int arr[26]={0};
    for(int i = 0; i<s.length();i++){
        char ch = s[i];
        int n = 0;
        if(ch>='a' && ch<='z'){
            n = ch - 'a';
        }
        else{
            n = ch - 'A';
        }
        arr[n]++;
    }
    int maxi = -1;
    int ans = -1;
    for(int i = 0; i< 26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }      
    }
    char ch = 'a'+ ans;
    return ch;
}
int main(){
    string s = "test";
    cout<<maxOcc(s);
}
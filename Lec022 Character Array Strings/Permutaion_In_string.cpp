#include<bits/stdc++.h>
using namespace std;
    bool checkEqual(int a[26],int b[26]){
        for(int i = 0; i<26;i++){
            if(a[i]!=b[i])
                return 0;    
        }
        return 1;
    }
    bool checkInclusion1(string s1, string s2) {
        int count1[26]={0};
        for(int i = 0 ; i<s1.length();i++){
            int index = s1[i]-'a';
            count1[index]++;
        }
        int i = 0;
        int windowSize = s1.length();
        int count2[26]={0};
        while(i<s2.length() && i<windowSize){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
            }
        if(checkEqual(count1,count2))
                return 1;
        
        while(i<s2.length()){
            char newChar=s2[i];
            int index = newChar - 'a';
            count2[index]++;
            char oldChar = s2[i-windowSize];
            index = oldChar - 'a';
            count2[index]--;
            i++;
            
            if(checkEqual(count1,count2))
            return 1;
        }
        return 0;   
    }

    bool checkInclusion(string s1, string s2){
        int n = s1.length(), m = s2.length();
        if(n > m) return false;
        vector<int>count(26),window(26);
        for(int i = 0; i < n ;i++){
            count[s1[i] - 'a']++;
            window[s2[i] - 'a']++;
        }
        if(count == window) return true;
        for(int i = n ; i < m;i++){
            window[s2[i] - 'a']++;
            window[s2[i - n] - 'a']--;
            if(count == window) return true;
        }
        return false;
    }
    int main(){
        cout<<checkInclusion("ed","abhidesjs")<<endl;
    }

#include<bits/stdc++.h>
using namespace std;
void solve(string digits,string output,int index , string map[],vector<string> &ans){
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    int number = digits[index]-'0';
    string value = map[number];

    for(int i = 0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits,output,index+1,map,ans);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digits){
    int index = 0;
    vector<string> ans;
    string output = "";
    string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,map,ans);
    return ans;
}

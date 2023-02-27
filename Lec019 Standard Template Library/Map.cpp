#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> m;

    m[1]="Paras";
    m[2]="Anxi";
    m[3]="Kakoi";
    m[4]="Paras";
    m.insert({5,"Help"});
    for(auto i: m){
        cout<<"key : "<<i.first<<" "<<"Value : " <<i.second<<" "<<endl;
    }cout<<endl;

}
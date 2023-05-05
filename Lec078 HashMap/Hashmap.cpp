#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>m;

    pair<string,int>p = make_pair("paras" , 3);
    m.insert(p);
    pair<string,int>p2("Anxi", 2);
    m.insert(p2);
    m["paras"] = 1;

    cout<< m["paras"]<<endl;

    cout<<m.at("Anxi")<<endl;
    cout<<m["UK"]<<endl;
    cout<<m.at("UK")<<endl;
    cout<<m.count("paras")<<endl;
    cout<<m.size()<<endl;
    cout<<m.erase("paras")<<endl;
    cout<<m.size()<<endl;

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    unordered_map<string,int> :: iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}
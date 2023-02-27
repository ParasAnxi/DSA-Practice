#include<bits/stdc++.h>

using namespace std;


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);

    cout<<"Finding 5 :"<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Lower bound :"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    int a =3;
    int b =5;
    cout<<"Max "<<max(a,b)<<endl;
    cout<<"Min "<<min(a,b)<<endl;
    swap(a,b);
    cout<< a << " "<< b <<endl;

    string s= "emosewA";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    for(auto p: v){
        cout<<p<<" ";
    }cout<<endl;
    sort(v.begin(),v.end()); //based on intro sort quick heap and insertion sort 
    for(auto p: v){
        cout<<p<<" ";
    }cout<<endl;
}
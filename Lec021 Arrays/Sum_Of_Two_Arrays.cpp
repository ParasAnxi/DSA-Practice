#include<bits/stdc++.h>
using namespace std;

vector<int> sumOfTwoArray(vector<int> &a , vector<int> &b ,int n ,int m){
    vector<int> ans;
    int i = n-1;
    int j = m-1;
    int carry=0;
    while(i>=0 && j>=0){
        int v1=a[i];
        int v2=b[j];
        int sum = v1+v2+carry;
        carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum = a[i]+carry;
        carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum = b[j]+carry;
        carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int> a1;
    vector<int> a2;
    int n = a1.size();
    int m = a2.size();
    a1.push_back(1);
    a1.push_back(2);
    a2.push_back(5);
    a2.push_back(1);
    vector<int> ans = sumOfTwoArray(a1,a2,n,m);
    for(auto i : ans){
        cout<<i<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

void destination(int src,int des){
    cout << "source " << src  << " destination " << des << endl;
    
    if(src == des) {
        cout << " Destination reached " << endl;
        return ;
    }
    destination(src+1,des); 
}
int main(){
    int src = 1;
    int des = 10;
    destination(src,des);
}
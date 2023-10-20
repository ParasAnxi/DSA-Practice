#include<bits/stdc++.h>
using namespace std;

int arr[20][20];
int count = 0;

void displayMatrix(int v){
    for(int i = 0;i<v;i++){
        for(int j = 0;j<v;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void addEdge(int u,int v){
    arr[u][v] = 1;
    arr[v][u] = 1;
}

int main(){
    int v = 4;
    addEdge(0,2);
    addEdge(0,3);
    addEdge(2,1);
    addEdge(2,3);
    displayMatrix(v);
}
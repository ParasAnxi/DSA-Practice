#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int i ,int j ,int key){
    for(int i = 0 ; i<3 ;i++){
        for(int j = 0 ;j<4 ;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    int row = 3;
    int col = 4;
    
    if(isPresent(arr,row,col,13)){
        cout<<"Key Found"<<endl;
    }
    else{
        cout<<"Key Not Found "<<endl;
    }

}
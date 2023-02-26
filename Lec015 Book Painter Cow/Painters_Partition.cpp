#include<bits/stdc++.h>
using namespace std;
 bool isPossible(vector<int> board , int n ,int k ,int mid){
    int painter = 1;
    int boards = 0;
    for(int i = 0;i<n;i++){
        if(boards+board[i]<=mid){
            boards+=board[i];
        }
        else{
            painter++;
            if(painter > k || board[i]>mid){
                return false;
            }
            boards=board[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0;
    int sum = 0;
    int ans = -1;
    int n = boards.size();
    for(int i=0; i<n; i++){
        sum+=boards[i];
    }
    int end = sum;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(isPossible(boards,n,k,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
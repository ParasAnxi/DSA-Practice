#include<bits/stdc++.h>
using namespace std;
// bool solve(int index,int arr[],int N,int target){
//     if(index>=N)return 0;
//     if(target<0)return 0;
//     if(target == 0) return 1;
//     bool inc = solve(index+1,arr,N,target-arr[index]);
//     bool exc = solve(index+1,arr,N,target-0);
//     return inc or exc;
// }
// int equalPartition(int N,int arr[]){
//     int total = 0;
//     for(int i = 0;i<N;i++){
//         total+=arr[i];
//     }
//     if(total & 1)return 0;
//     int target = total/2;
//     return solve(0,arr,N,target);
// }

// bool solveMem(int index,int arr[],int N,int target,vector<vector<int>>&dp){
//     if(index>=N)return 0;
//     if(target<0)return 0;
//     if(target == 0) return 1;
//     if(dp[index][target]!=0) return dp[index][target];
//     bool inc = solveMem(index+1,arr,N,target-arr[index],dp);
//     bool exc = solveMem(index+1,arr,N,target-0,dp);

//     return dp[index][target] = inc or exc;
// }
// int equalPartition(int N,int arr[]){
//     int total = 0;
//     for(int i = 0;i<N;i++){
//         total+=arr[i];
//     }
//     if(total & 1)return 0;
//     int target = total/2;
//     vector<vector<int>>dp(N,vector<int>(target+1,-1));
//     return solveMem(0,arr,N,target,dp);
// }
// bool solveTab(int arr[],int N,int total){
//     vector<vector<int>> dp(N+1, vector<int>(total + 1, -1));
//     for(int i = 0;i<=N;i++){
//         dp[i][0] = 1;
//     }
//     for(int index = N-1 ;index>=0;index--){
//         for(int target = 0;target<=total/2;target++){
//             bool inc =false;
//             if(target - arr[index]>=0)
//                 inc = dp[index + 1][target - arr[index]];
//             bool exc = dp[index + 1][target - 0];
//             dp[index][target] = inc or exc;
//         }
//     }
//     return dp[0][total/2];
// }
// int equalPartition(int N,int arr[]){
//     int total = 0;
//     for(int i = 0;i<N;i++){
//         total+=arr[i];
//     }
//     if(total & 1)return 0;
//     int target = total/2;
    
//     return solveTab(arr,N,target);
// }
bool solveSo(int arr[],int N,int total){
    vector<int>curr(total+1,0);
    vector<int>next(total+1,0);
    curr[0] = 1;
    next[0] = 1;
    for(int index = N-1 ;index>=0;index--){
        for(int target = 0;target<=total/2;target++){
            bool inc =false;
            if(target - arr[index]>=0)
                inc = next[target - arr[index]];
            bool exc = next[target - 0];
            curr[target] = inc or exc;
        }
        next = curr;
    }
    return next[total/2];
}
int equalPartition(int N,int arr[]){
    int total = 0;
    for(int i = 0;i<N;i++){
        total+=arr[i];
    }
    if(total & 1)return 0;
    int target = total/2;
    
    return solveSo(arr,N,target);
}

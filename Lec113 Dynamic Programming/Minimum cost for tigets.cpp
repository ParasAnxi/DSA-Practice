#include<bits/stdc++.h>
using namespace std;
// int solve(int n,vector<int>& days,vector<int>cost,int index){
//     if(index>=n) return 0;
//     //single day pass
//     int op1 = cost[0] + solve(n,days,cost,index+1);

//     //seven day pass
//     int i;
//     for(i = index;i<n && days[i]<days[index+7];i++);
//     int op2 = cost[1] + solve(n,days,cost,i);

//     //30 days
//     for (i = index; i < n && days[i] < days[index + 30]; i++);
//     int op3 = cost[2] + solve(n, days, cost, i);
//     return min(op1,min(op2,op3));
// }
// int minCost(int n,vector<int>days,vector<int>cost){
//     return solve(n,days,cost,0);
// }
// int solveMem(int n,vector<int>& days,vector<int>cost,int index,vector<int>&dp){
//     if(index>=n) return 0;
//     //single day pass
//     if(dp[index]!=-1)return dp[index];
//     int op1 = cost[0] + solveMem(n,days,cost,index+1,dp);

//     //seven day pass
//     int i;
//     for(i = index;i<n && days[i]<days[index+7];i++);
//     int op2 = cost[1] + solveMem(n,days,cost,i,dp);

//     //30 days
//     for (i = index; i < n && days[i] < days[index + 30]; i++);
//     int op3 = cost[2] + solveMem(n, days, cost, i,dp);
//     dp[index] =  min(op1,min(op2,op3));
//     return dp[index];
// }
// int minCost(int n,vector<int>days,vector<int>cost){
//     vector<int>dp(n+1,-1);
//     return solveMem(n,days,cost,0,dp);
// }
//tabulation
// int solveTab(int n,vector<int>& days,vector<int>cost){
//     vector<int>dp(n+1,INT_MAX);
//     dp[n] = 0;
//     for(int k = n-1;k>=0;k--){
//             int op1 = cost[0] + dp[k+1];
//             //seven day pass
//             int i;
//             for(i = k;i<n && days[i]<days[k+7];i++);
//             int op2 = cost[1] + dp[i];

//             //30 days
//             for (i = k; i < n && days[i] < days[k + 30]; i++);
//             int op3 = cost[2] + dp[i];
//             dp[k] =  min(op1,min(op2,op3));
//     }    
//     return dp[0];
// }
// int minCost(int n,vector<int>days,vector<int>cost){
//     vector<int>dp(n+1,-1);
//     return solveTab(n,days,cost);
// }

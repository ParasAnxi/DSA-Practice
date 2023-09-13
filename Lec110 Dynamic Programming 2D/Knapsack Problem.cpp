#include<bits/stdc++.h>
using namespace std;
// int solve(vector<int> &weight, vector<int> value, int capacity,int index){
//     if(index == 0){
//         if(weight[0]<=capacity){
//             return value[0];
//         }
//         else{
//             return 0;
//         }
//     }
//     int include = 0;
//     if (weight[index] <= capacity){
//         include = value[index] + solve(weight, value, capacity - weight[index], index - 1);
//     }
//     int exclude = solve(weight, value, capacity, index - 1);
//     int ans = max(exclude,include);
//     return ans;
// } 
// int knacksack(vector<int> weight, vector<int> value, int n, int maxWeight){
//     return solve(weight,value,maxWeight,n-1);
// }

//mem

// int solveMem(vector<int> &weight, vector<int> value, int capacity, int index, vector<vector<int>>&dp)
// {
//     if(index == 0){
//         if(weight[0]<=capacity){
//             return value[0];
//         }
//         else{
//             return 0;
//         }
//     }
//     if(dp[index][capacity]!=-1) return dp[index][capacity];
//     int include = 0;
//     if (weight[index] <= capacity){
//         include = value[index] + solveMem(weight, value, capacity - weight[index], index - 1,dp);
//     }
//     int exclude = solveMem(weight, value, capacity, index - 1,dp);
//     dp[index][capacity] = max(exclude,include);
//     return dp[index][capacity];
// }
// int knacksack(vector<int> weight, vector<int> value, int n, int maxWeight){
//     vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));
//     return solveMem(weight,value,maxWeight,n-1,dp);
// }

//tabulation
// int solveTab(vector<int> &weight,int n, vector<int> value, int capacity, int index)
// {
//     vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
//     for(int w = weight[0];w<=capacity;w++){
//         if(weight[0]<=capacity)
//             dp[0][w] = value[0];
//         else
//             dp[0][w] = 0;
//     }
//     for(int index = 1;index<n;index++){
//         for(int w = 0;w<=capacity;w++){
//             int include = 0;
//             if (weight[index] <= w){
//                 include = value[index] + dp[index-1][w - weight[index]];
//             }
//             int exclude = dp[index-1][w];
//             dp[index][w] = max(exclude,include);
//         }
//     }
//     return dp[n-1][capacity];
// }
// int knacksack(vector<int> weight, vector<int> value, int n, int maxWeight){
//     return solveTab(weight,n,value,maxWeight,n-1);
// }
int solveSo(vector<int> &weight,int n, vector<int> value, int capacity, int index)
{
    vector<int>prev(capacity+1,0);
    vector<int>curr(capacity+1,0);
    for(int w = weight[0];w<=capacity;w++){
        if(weight[0]<=capacity)
            prev[w] = value[0];
        else
            prev[w] = 0;
    }
    for(int index = 1;index<n;index++){
        for(int w = 0;w<=capacity;w++){
            int include = 0;
            if (weight[index] <= w){
                include = value[index] + prev[w - weight[index]];
            }
            int exclude = prev[w];
            curr[w] = max(exclude,include);
        }
        prev = curr;
    }
    return prev[capacity];
}
int knacksack(vector<int> weight, vector<int> value, int n, int maxWeight){
    return solveSo(weight,n,value,maxWeight,n-1);
}
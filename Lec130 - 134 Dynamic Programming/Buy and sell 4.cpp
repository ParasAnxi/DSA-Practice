#include<bits/stdc++.h>
using namespace std;

// int solve(int index,int operationNo,int k,vector<int>&prices){
//     if(index==prices.size())return 0;
//     if(operationNo == 2*k)return 0;
//     int profit = 0;
//     if(operationNo%2==0){
//                 profit = max((-prices[index] + solve(index+1,operationNo+1,k,prices)), (0 + solve(index + 1,operationNo,k,prices)));
//         }else{
//                 profit = max((+prices[index] + solve(index + 1, operationNo+1,k,prices)), (0 + solve(index + 1, operationNo,k, prices)));
//         }
//         return profit;
// }
// int maxProfit(int k,vector<int>&prices){
//     return solve(0,0,k,prices);
// }
// int solveMem(int index, int operationNo, int k, vector<int> &prices, vector<vector<int>>&dp)
// {
//     if(index==prices.size())return 0;
//     if(operationNo == 2*k)return 0;
//     if (dp[index][operationNo]!=-1)
//         return dp[index][operationNo];
//     int profit = 0;
//     if(operationNo%2==0){
//                 profit = max((-prices[index] + solveMem(index+1,operationNo+1,k,prices,dp)), (0 + solveMem(index + 1,operationNo,k,prices,dp)));
//         }else{
//                 profit = max((+prices[index] + solveMem(index + 1, operationNo+1,k,prices,dp)), (0 + solveMem(index + 1, operationNo,k, prices,dp)));
//         }
//         return dp[index][operationNo] = profit;
// }
// int maxProfit(int k,vector<int>&prices){
//     int n = prices.size();
//     vector<vector<int>>dp(n,vector<int>(2*k,-1));
//     return solveMem(0,0,k,prices,dp);
// }
// int solveTab(int k, vector<int> &prices)
// {
//     int n = prices.size();
//     vector<vector<int>> dp(n, vector<int>(2 * k +1, -1));
//     for(int index = n-1;index>=0;index--){
//         for(int operationNo = 0;operationNo<2*k;operationNo++){
//             int profit = 0;
//             if (operationNo % 2 == 0)
//             {
//                 profit = max((-prices[index] + dp[index+1][operationNo+1]), (0 + dp[index + 1][operationNo]));
//             }
//             else
//             {
//                 profit = max((+prices[index] + dp[index + 1][operationNo + 1]), (0 + dp[index + 1][operationNo]));
//             }
//             dp[index][operationNo] = profit;
//         }
//     }
//     return dp[0][0];
// }
// int maxProfit(int k,vector<int>&prices){
    
//     return solveTab(k,prices);
// }
int solveSo(int k, vector<int> &prices)
{
    int n = prices.size();
    vector<int>curr(2*k+1,0);
    vector<int>next(2*k+1,0);
    for(int index = n-1;index>=0;index--){
        for(int operationNo = 0;operationNo<2*k;operationNo++){
            int profit = 0;
            if (operationNo % 2 == 0)
            {
                profit = max((-prices[index] + next[operationNo + 1]), (0 + next[operationNo]));
            }
            else
            {
                profit = max((+prices[index] + next[operationNo + 1]), (0 + next[operationNo]));
            }
            curr[operationNo] = profit;
        }
        next = curr;
    }
    return next[0];
}
int maxProfit(int k,vector<int>&prices){
    return solveSo(k,prices);
}
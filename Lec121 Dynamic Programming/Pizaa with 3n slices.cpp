#include<bits/stdc++.h>
using namespace std;
// int solve(int index,int endIndex,vector<int>&slices,int n){
//     if(n==0 || index>endIndex) return 0;
//     int include = slices[index] + solve(index+1,endIndex,slices,n-1);
//     int exclude = 0 + solve(index+1,endIndex,slices,n);
//     return max(include,exclude);
// }
// int maxSlice(vector<int>& slices){
//     int k = slices.size();
//     int eat1 = solve(0,k-2,slices,k/3);
//     int eat2 = solve(1,k-1,slices,k/3);
//     return max(eat1,eat2);
// }
// int solveMem(int index,int endIndex,vector<int>&slices,int n,vector<vector<int>>&dp){
//     if(n==0 || index>endIndex) return 0;
//     if(dp[index][n]!=-1)return dp[index][n];
//     int include = slices[index] + solveMem(index+1,endIndex,slices,n-1,dp);
//     int exclude = 0 + solveMem(index+1,endIndex,slices,n,dp);
//     return dp[index][n] =  max(include,exclude);
// }
// int maxSlice(vector<int>& slices){
//     int k = slices.size();
//     vector<vector<int>>dp1(k,vector<int>(k,-1));
//     int eat1 = solveMem(0,k-2,slices,k/3,dp1);
//     vector<vector<int>>dp2(k,vector<int>(k,-1));
//     int eat2 = solveMem(1,k-1,slices,k/3,dp2);
//     return max(eat1,eat2);
// }
// int solveTab(vector<int>&slices){
//     int k = slices.size();
//     vector<vector<int>> dp1(k,vector<int>(k+2,0));
//     vector<vector<int>> dp2(k,vector<int>(k+2,0));
//     for(int index = k-2 ;index>=0;index--){
//         for(int n = 1;n<=k/3;n++){
//             int include = slices[index] + dp1[index+2][n-1];
//             int exclude = 0 + dp1[index+1][n];
//             dp1[index][n] = max(include, exclude);
//         }
//     }
//     int eat1 = dp1[0][k/3];
//     for (int index = k - 1; index >= 1; index--)
//     {
//         for (int n = 1; n <= k / 3; n++)
//         {
//             int include = slices[index] + dp1[index + 2][n - 1];
//             int exclude = 0 + dp2[index + 1][n];
//             dp2[index][n] = max(include, exclude);
//         }
//     }
//     int eat2 = dp2[1][k/3];
//     return max(eat1,eat2);
// }
// int maxSlice(vector<int>& slices){ 
//     return solveTab(slices);
// }
int solveSo(vector<int>&slices){
    int k = slices.size();
    vector<int>prev1(k+2,0);
    vector<int>curr1(k+2,0);
    vector<int>next1(k+2,0);
    vector<int>prev2(k+2,0);
    vector<int>curr2(k+2,0);
    vector<int>next2(k+2,0);

    for(int index = k-2 ;index>=0;index--){
        for(int n = 1;n<=k/3;n++){
            int include = slices[index] + next1[n-1];
            int exclude = 0 + curr1[n];
            prev1[n] = max(include, exclude);
        }
        next1 = curr1;
        curr1 = prev1;
    }
    int eat1 = curr1[k/3];
    for (int index = k - 1; index >= 1; index--)
    {
        for (int n = 1; n <= k / 3; n++)
        {
            int include = slices[index] + next2[n - 1];
            int exclude = 0 + curr2[n];
            prev2[n] = max(include, exclude);
        }
        next2 = curr2;
        curr2 = prev2;
    }
    int eat2 = curr2[k/3];
    return max(eat1,eat2);
}
int maxSlice(vector<int>& slices){ 
    return solveSo(slices);
}
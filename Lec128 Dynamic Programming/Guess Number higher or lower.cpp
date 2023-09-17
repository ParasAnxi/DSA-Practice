#include<bits/stdc++.h>
using namespace std;

// int solve(int s,int e){
//     if(s>=e) return 0;
//     int maxi = INT_MAX;
//     for(int i = s;i<=e;i++){
//         maxi = min(maxi,i+max(solve(s,i-1),solve(i+1,e)));
//     }
//     return maxi;
// }
// int getMoney(int n){
//     return solve(1,n);
// }
// int solveMem(int s, int e, vector<vector<int>>&dp)
// {
//     if(s>=e) return 0;
//     if(dp[s][e]!=-1)return dp[s][e];
//     int maxi = INT_MAX;
//     for(int i = s;i<=e;i++){
//         maxi = min(maxi,i+max(solveMem(s,i-1,dp),solveMem(i+1,e,dp)));
//     }
//     return dp[s][e] = maxi;
// }
// int getMoney(int n){
//     vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
//     return solveMem(1,n,dp);
// }
int solveTab(int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 2, 0));
    for(int s = n;s>=1;s--){
        for(int e=s;e<=n;e++){
            if(s == e)
                continue;
            else{
                int maxi = INT_MAX;
                for(int i =s;i<=e;i++){
                    maxi = min(maxi, i + max(dp[s][i-1],dp[i+1][e]));
                }
                dp[s][e] = maxi;
            }
        }
    }
    return dp[1][n];
}
int getMoney(int n){
    return solveTab(n);
}

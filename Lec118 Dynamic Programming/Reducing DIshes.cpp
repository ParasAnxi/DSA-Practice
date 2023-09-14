#include<bits/stdc++.h>
using namespace std;

// int solve(vector<int>&satisfaction,int index,int time){
//     if(index == satisfaction.size()) return 0;
//     int include = satisfaction[index] * (time+1) + solve(satisfaction,index+1,time+1);
//     int exclude = 0 + solve(satisfaction,index+1,time); 
//     return max(include,exclude);
// }
// int maxSatisfaction(vector<int>&satisfaction){
//     sort(satifaction.beign(),satifaction.end());
//     solve(satisfaction,0,0);
// }

// int solveMem(vector<int>&satisfaction,int index,int time,vector<vector<int>>&dp){
//     if(index == satisfaction.size()) return 0;
//     if(dp[index][time]!=-1)return dp[index][time];
//     int include = satisfaction[index] * (time+1) + solveMem(satisfaction,index+1,time+1,dp);
//     int exclude = 0 + solveMem(satisfaction,index+1,time,dp); 
//     return dp[index][time] = max(include,exclude);
// }
// int maxSatisfaction(vector<int>&satisfaction){
//     sort(satisfaction.begin(),satisfaction.end());
//     int n = satisfaction.size();
//     vector<vector<int>>dp(n,vector<int>(n+1,-1));
//     solveMem(satisfaction,0,0,dp);
// }

// int solveTab(vector<int>&satisfaction){
//     int n = satisfaction.size();
//     vector<vector<int>> dp(n, vector<int>(n + 1, -1));

//     for(int index = n-1;index>=0;index--){
//         for(int time = index;time>=0;time--){
//             int include = satisfaction[index] * (time + 1) + dp[index+1][time+1];
//             int exclude = 0 + dp[index+1][time];
//             dp[index][time] = max(include,exclude);
//         }
//     }
//     return dp[0][0];
// }
// int maxSatisfaction(vector<int>&satisfaction){
//     sort(satisfaction.begin(),satisfaction.end());
//     return solveTab(satisfaction);
// }

int solveSo(vector<int>&satisfaction){
    int n = satisfaction.size();
    vector<int>curr(n+1,0);
    vector<int>next(n+1,0);

    for(int index = n-1;index>=0;index--){
        for(int time = index;time>=0;time--){
            int include = satisfaction[index] * (time + 1) + next[time+1];
            int exclude = 0 + next[time];
            curr[time] = max(include,exclude);
        }
        next = curr;
    }
    return next[0];
}
int maxSatisfaction(vector<int>&satisfaction){
    sort(satisfaction.begin(),satisfaction.end());
    return solveSo(satisfaction);
}
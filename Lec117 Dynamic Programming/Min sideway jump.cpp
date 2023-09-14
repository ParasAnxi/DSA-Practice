#include<bits/stdc++.h>
using namespace std;
// int solve(vector<int>&obstace,int currlane,int pos){
//     int n = obstace.size();
//     if(pos == n) return 0;
//     if(obstace[pos+1] != currlane){
//         return solve(obstace,currlane,pos+1);
//     }
//     else{
//         int ans = INT_MAX;
//         for(int i = 1;i<=3;i++){
//             if(currlane!= i && obstace[pos]!=i)
//                 ans = min(ans,1 + solve(obstace,i,pos));
//         }
//         return ans;
//     }
// }
// int minSIdeWayjump(vector<int>&obstacle){
//     return solve(obstacle,2,0);
// }
// int solveMem(vector<int>&obstace,int currlane,int pos,vector<vector<int>>&dp){
//     int n = obstace.size();
//     if(pos == n) return 0;
//     if(dp[currlane][pos]!=-1)return dp[currlane][pos];
//     if(obstace[pos+1] != currlane){
//         return solveMem(obstace,currlane,pos+1,dp);
//     }
//     else{
//         int ans = INT_MAX;
//         for(int i = 1;i<=3;i++){
//             if(currlane!= i && obstace[pos]!=i)
//                 ans = min(ans,1 + solveMem(obstace,i,pos,dp));
//         }
//         dp[currlane][pos] = ans;
//         return dp[currlane][pos];
//     }
// }
// int minSIdeWayjump(vector<int>&obstacle){
//     vector<vector<int>>dp(4,vector<int>(obstacle.size(),-1));
//     return solveMem(obstacle,2,0,dp);
// }

// int solveTab(vector<int>&obstace){
//     int n = obstace.size();
//     vector<vector<int>>dp(4,vector<int>(n,1e9));
//     dp[0][0] = 0;
//     dp[1][0] = 0;
//     dp[2][0] = 0;
//     dp[3][0] = 0;
//     for(int pos = n-1;pos>=0;pos--){
//         for (int currlane = 1; currlane <= 3; currlane++){
//             if (obstace[pos + 1] != currlane)
//             {
//                 dp[currlane][pos] = dp[currlane][pos+1];
//             }
//             else{
//                 int ans = 1e9;
//                 for(int i = 1;i<=3;i++){
//                     if(currlane!= i && obstace[pos]!=i)
//                         ans = min(ans,1 + dp[i][pos+1]);
//                 }
//                 dp[currlane][pos] = ans;
//             }
//         }
//     }
//     return min(dp[2][0],min(1+dp[1][0],1+dp[3][0]));
// }
// int minSIdeWayjump(vector<int>&obstacle){
//     return solveTab(obstacle); 
// }
int solveSo(vector<int>&obstace){
    int n = obstace.size();
    vector<int>curr(4,INT_MAX);
    vector<int>next(4,INT_MAX);

    next[0] = 0;
    next[1] = 0;
    next[2] = 0;
    next[3] = 0;
    for(int pos = n-1;pos>=0;pos--){
        for (int currlane = 1; currlane <= 3; currlane++){
            if (obstace[pos + 1] != currlane)
            {
                curr[currlane] = next[currlane];
            }
            else{
                int ans = 1e9;
                for(int i = 1;i<=3;i++){
                    if(currlane!= i && obstace[pos]!=i)
                        ans = min(ans,1 + next[i]);
                }
                curr[currlane] = ans;
            }
        }
        next = curr;
    }
    return min(next[2],min(1+next[1],1+next[3]));
}
int minSIdeWayjump(vector<int>&obstacle){
    return solveSo(obstacle); 
}
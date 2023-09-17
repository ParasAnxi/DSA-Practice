#include<bits/stdc++.h>
using namespace std;

// int solve(string &a,string &b,int i,int j){
//     if(i == a.length()) return b.length()-j;
//     if(j == b.length()) return a.length()-i;

//     int ans = 0;
//     if(a[i]==b[j]){
//         return solve(a,b,i+1,j+1);
//     }else{
//         int insertAns = 1 + solve(a,b,i,j+1);
//         int deleteAns = 1 + solve(a,b,i+1,j);
//         int updateAns = 1 + solve(a,b,i+1,j+1);
//         ans = min(insertAns,min(deleteAns,updateAns));
//     }
//     return ans;
// }
// int minDistance(string word1,string word2){
//     return solve(word1,word2,0,0);
// }
// int solve(string &a, string &b, int i, int j, vector<vector<int>>&dp)
// {
//     if(i == a.length()) return b.length()-j;
//     if(j == b.length()) return a.length()-i;
//     if(dp[i][j]!=-1)return dp[i][j];
//     int ans = 0;
//     if(a[i]==b[j]){
//         return solve(a,b,i+1,j+1,dp);
//     }else{
//         int insertAns = 1 + solve(a,b,i,j+1,dp);
//         int deleteAns = 1 + solve(a,b,i+1,j,dp);
//         int updateAns = 1 + solve(a,b,i+1,j+1,dp);
//         ans = min(insertAns,min(deleteAns,updateAns));
//     }
//     return dp[i][j] = ans;
// }
// int minDistance(string word1,string word2){
//     int n = word1.length();
//     int m = word2.length();
//     vector<vector<int>>dp(n,vector<int>(m,-1));
//     return solve(word1,word2,0,0,dp);
// }
// int solveTb(string &a, string &b)
// {
//     int n = a.length();
//     int m = b.length();
//     vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
//     for(int j = 0;j<m;j++){
//         dp[n][j] = m-j;
//     }
//     for(int i =0;i<n;i++){
//         dp[i][m] = n-i;
//     }
//     for(int i = n-1;i>=0;i--){
//         for(int j = m-1;j>=0;j--){
//             int ans = 0;
//             if (a[i] == b[j])
//             {
//                 ans = dp[i + 1][j + 1];
//             }
//             else
//             {
//                 int insertAns = 1 + dp[i][j + 1];
//                 int deleteAns = 1 + dp[i + 1][j];
//                 int updateAns = 1 + dp[i + 1][j + 1];
//                 ans = min(insertAns, min(deleteAns, updateAns));
//             }
//             dp[i][j] = ans;
//         }
//     }
//     return dp[0][0];
// }
// int minDistance(string word1,string word2){
    
//     return solveTb(word1,word2);
// }
int solveTb(string &a, string &b)
{
    int n = a.length();
    int m = b.length();
    vector<int>curr(m+1,0);
    vector<int>next(m+1,0);

    for(int j = 0;j<m;j++){
        next[j] = m-j;
    }

    for(int i = n-1;i>=0;i--){
        for(int j = m-1;j>=0;j--){

            curr[m] = n-i;
            int ans = 0;
            if (a[i] == b[j])
            {
                ans = next[j + 1];
            }
            else
            {
                int insertAns = 1 + curr[j + 1];
                int deleteAns = 1 + next[j];
                int updateAns = 1 + next[j + 1];
                ans = min(insertAns, min(deleteAns, updateAns));
            }
            curr[j] = ans;
        }
        next = curr;
    }
    return next[0];
}
int minDistance(string word1,string word2){
    if(word1.length() == 0) return word2.length();
    if(word2.length() == 0) return word1.length();
    return solveTb(word1,word2);
}
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
// long long int countDerangement(int n){
//     if(n == 1) return 0;
//     if(n == 2) return 1;

//     int ans = (((n-1)%mod)*((countDerangement(n-1))%mod) + ((countDerangement(n-2))%mod))%mod;
//     return ans;
// }

// long long int solveMem(int n,vector<long long int>& dp){
//     if (n == 1)
//         return 0;
//     if(n == 2) 
//         return 1;
    
//     if(dp[n]!=-1) return dp[n];

//     dp[n] = (((n-1)%mod)*((solveMem(n-1,dp))%mod) + ((solveMem(n-2,dp))%mod))%mod;
//     return dp[n];
// }
// long long int countDerangement(int n)
// {
//     vector<long long int>dp(n+1,-1);
//     int ans = solveMem(n,dp);
//     return ans;
// }
// long long int solveTab(int n){
//     vector<long long int>dp(n+1,-1);
//     dp[1] = 0;
//     dp[2] = 1;
    
//     for(int i = 3;i<=n;i++){
//         long long int first = dp[i-1]%mod;
//         long long int second = dp[i-2]%mod;
//         long long int sum = (first+second)%mod;
//         long long int ans = ((i-1)*sum)%mod;
//         dp[i] = ans;
//     }
//     return dp[n];
// }
// long long int countDerangement(int n)
// {
//     return solveTab(n);
// }

//so
long long int solveSo(int n){
    long long int prev2 = 0;
    long long int prev1 = 1;
    
    for(int i = 3;i<=n;i++){
        long long int first = prev1%mod;
        long long int second = prev2%mod;
        long long int sum = (first+second)%mod;
        long long int ans = ((i-1)*sum)%mod;
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
long long int countDerangement(int n)
{
    return solveSo(n);
}

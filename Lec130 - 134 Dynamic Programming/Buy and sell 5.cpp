#include<bits/stdc++.h>
using namespace std;

int solveSo(vector<int> &prices,int fee)
{
    int n = prices.size();
    vector<int> curr(2, 0);
    vector<int> next(2, 0);
    for (int index = n - 1; index >= 0; index--)
    {
        for (int buy = 0; buy <= 1; buy++)
        {
            int profit = 0;
            if (buy)
            {
                profit = max((-prices[index] + next[0]), (0 + next[0]));
            }
            else
            {
                profit = max((+prices[index] + next[1]), (0 + next[0])) - fee;
            }
            curr[buy] = profit;
        }
        next = curr;
    }
    return next[1];
}
int maxProfit(vector<int>&prices,int fees){
    return solveSo(prices,fees);
}

#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    // Write your code here.
    int mn = prices[0];
    int ans = 0;
    int n = prices.size();
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, prices[i] - mn);
        if (mn > prices[i])
        {
            mn = prices[i];
        }
    }
    return ans;
}
#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
    // Write your code here.
    unordered_map<int, int> mp;

    for (auto itr : arr)
    {

        mp[itr]++;
    }

    for (auto itr : mp)
    {

        if (itr.second > 1)
        {

            return itr.first;
        }
    }
}

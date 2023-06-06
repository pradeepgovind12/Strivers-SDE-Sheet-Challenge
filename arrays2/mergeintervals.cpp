#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size(); i++)
    {
        vector<int> ind = intervals[i];
        if (ans.empty() || ind[0] > ans.back()[1])
        {
            ans.push_back(ind);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], ind[1]);
        }
    }
    return ans;
}

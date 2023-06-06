#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    // Write your code here.
    int index = 0;
    vector<int> ans(m + n);
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            ans[index] = arr1[i];
            index++;
            i++;
        }
        else
        {
            ans[index] = arr2[j];
            index++;
            j++;
        }
    }
    while (i < m)
    {
        ans[index] = arr1[i];
        index++;
        i++;
    }
    while (j < n)
    {
        ans[index] = arr2[j];
        index++;
        j++;
    }
    return ans;
}
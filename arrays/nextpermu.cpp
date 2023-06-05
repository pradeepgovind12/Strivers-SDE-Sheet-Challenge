#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    // for break point
    int least = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (p[i] < p[i + 1])
        {
            least = i;
            break;
        }
    }
    if (least == -1)
    {
        reverse(p.begin(), p.end());
        return p;
    }
    for (int j = n - 1; j >= 0; j--)
    {
        if (p[least] < p[j])
        {
            swap(p[least], p[j]);
            break;
        }
    }
    reverse(p.begin() + least + 1, p.end());
    return p;
}
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();

        if (n <= 1)
        {
            return intervals;
        }

         sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;

        res.push_back(intervals[0]);

        for (int i = 1; i < n; i++)
        {
            if (res.back()[1] >= intervals[i][0])
            {
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            }
            else
            {
                res.push_back(intervals[i]);
            }
        }

        return res;
    }
};
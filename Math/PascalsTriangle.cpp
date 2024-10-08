#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        vector<int> prev;
        vector<vector<int>> result;
        for (int i = 0; i < n; i++)
        {
            vector<int> cur(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                cur[j] = prev[j - 1] + prev[j];
            }
            result.push_back(cur);
            prev = cur;
        }
        return result;
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void primes(vector<bool> &prime, vector<int> &helper, int n)
    {
        for (int i = 2; i <= n; i++)
        {
            if (prime[i])
            {
                helper.push_back(i);
                for (int j = i * i; j <= n; j += i)
                {
                    prime[j] = false;
                }
            }
        }
    }
    int distinctPrimeFactors(vector<int> &nums)
    {
        vector<bool> prime(1000, true);
        vector<int> helper;
        int max = *max_element(nums.begin(), nums.end());
        primes(prime, helper, max);
        unordered_set<int> s;
        for (auto x : helper)
        {
            cout << x << endl;
        }
        for (auto x : helper)
        {
            for (auto y : nums)
            {
                if (y % x == 0)
                {
                    s.insert(x);
                }
            }
        }
        return s.size();
    }
};
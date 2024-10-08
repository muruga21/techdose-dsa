// sieve of erathosis
#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    vector<bool> helper(n, true);
    if (n < 2)
        return 0;
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (helper[i])
        {
            count++;
            for (int j = i * 2; j < n; j += i)
            {
                helper[j] = false;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countPrimes(n) << endl;
    return 0;
}
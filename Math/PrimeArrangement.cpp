#include <bits/stdc++.h>
using namespace std;

int modulo = pow(10, 9) + 7;

int numPrimeArrangements(int n)
{
    if (n <= 2)
        return 1;
    vector<bool> helper(n + 1, true);
    int primeCount = 0;
    for (int i = 2; i <= n; i++)
    {
        if (helper[i])
        {
            primeCount++;
            for (int j = i * i; j <= n; j += i)
            {
                helper[j] = false;
            }
        }
    }
    int nonPrimeCount = n - primeCount;
    long primeFact = 1;
    for (int i = 1; i <= primeCount; i++)
    {
        primeFact = (primeFact * i) % modulo;
    }
    long nonPrimeFact = 1;
    for (int i = 1; i <= nonPrimeCount; i++)
    {
        nonPrimeFact = (nonPrimeFact * i) % modulo;
    }
    return (primeFact * nonPrimeFact) % modulo;
}
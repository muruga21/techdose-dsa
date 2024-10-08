#include <bits/stdc++.h>
using namespace std;

double helper(double x, int n)
{
    if (x == 0)
        return 0;
    if (n == 1)
        return x;
    if (n == 0)
        return 1;
    double rem = helper(x, n / 2); // 2
    if (n % 2 == 0)
    {
        rem *= rem;
    }
    else
    {
        rem = rem * rem * x;
    }
    return rem;
}
double myPow(double x, int n)
{
    double result = helper(x, n);
    if (n > 0)
    {
        return result;
    }
    return 1 / result;
}
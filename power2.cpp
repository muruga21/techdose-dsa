#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    (n&(n-1)) == 0 ? cout<<"YES\n" : cout<<"NO\n";
    return 0;
}

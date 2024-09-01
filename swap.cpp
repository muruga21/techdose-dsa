#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    cin >> a >> b;
    cout << "Before swapping: " << a << " " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}

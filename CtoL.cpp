#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    cin >> ch;
    if(ch < 'A' || ch > 'Z'){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    int mask = 1 << 5;
    ch = ch | mask;
    cout<<ch<<endl;
    return 0;
}

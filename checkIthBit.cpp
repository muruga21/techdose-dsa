#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    cin>>n>>i;
    if((n&(1<<i))!=0){
        cout<<"1\n";
    }else{
        cout<<"0\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int m = pow(10,9)+7;
    int uniquePermutations(string word){
        long long devisorValue = 1;
        long long numeratorValue = 1;
        int i = 1;
        unordered_map<char, int> mp;
        for(auto x : word){
            numeratorValue = (numeratorValue%m * i%m)%m;
            i++;
            mp[x]++;
            devisorValue = (devisorValue%m * mp[x]%m )%m;
        }
        return (numeratorValue * modularInverse(devisorValue, m) % m) % m;
    }
    long long modularInverse(long long a, int mod) {
        long long result = 1;
        int exponent = mod - 2;
        while (exponent) {
            if (exponent % 2 == 1) {
                result = (result * a) % mod;
            }
            a = (a * a) % mod;
            exponent /= 2;
        }
        return result;
    }
    int countAnagrams(string s) {
        string word = "";
        long long result = 1;
        int n = s.size();
        for(int i = 0 ; i<=n ; i++){
            if(s[i] == ' ' || i == n){
                result =  (result%m*(uniquePermutations(word)%m))%m;
                word = "";
            }
            else{
                word+=s[i];
            }
        }

        return result%m;
    }
};
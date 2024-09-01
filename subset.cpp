#include <bits/stdc++.h>
using namespace std;

void generateSubsets(vector<int>& arr) {
    int n = arr.size();
    int helper = 1 << n;

    for (int i = 0; i < helper; ++i) {
        vector<int> subset;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(arr[j]);
            }
        }
        for (auto i : subset) {
            cout << i << " ";
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    generateSubsets(arr);
    return 0;
}

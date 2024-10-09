#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int>& arr, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary vectors
    vector<int> left(n1);
    vector<int> right(n2);

    // Copy data to temp vectors
    for (int i = 0; i < n1; ++i) {
        left[i] = arr[low + i];
    }
    for (int j = 0; j < n2; ++j) {
        right[j] = arr[mid + 1 + j];
    }

    // Merge the two sub-arrays back into arr
    int i = 0, j = 0;
    int k = low;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void merge(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Recursively sort first and second halves
        merge(arr, low, mid);
        merge(arr, mid + 1, high);

        // Merge the sorted halves
        mergeArray(arr, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Declare vector to hold the input
    vector<int> arr(n);

    // Take input from the user
    cout << "Enter the elements: ";
    for (int i = 0

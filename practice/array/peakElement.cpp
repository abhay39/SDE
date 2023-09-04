#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n) {
    if (n == 0) {
        return -1; // Handle empty array.
    }

    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    int arr[] = {2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = peakElement(arr, n);

    if (max != -1) {
        cout << "Maximum element is: " << max << endl;
    } else {
        cout << "Array is empty." << endl;
    }

    return 0;
}

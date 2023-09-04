#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr, int n) {
    if (n <= 1) {
        // If the array has 0 or 1 element, it has no duplicates to remove.
        return n;
    }

    int k = 1; // Initialize the result index to 1 (assuming the first element is unique)

    // Start the loop from the second element
    for (int i = 1; i < n; i++) {
        bool isDuplicate = false;

        // Check if the current element is a duplicate of any previous element
        for (int j = 0; j < k; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If it's not a duplicate, add it to the result
        if (!isDuplicate) {
            arr[k] = arr[i];
            k++;
        }
    }

    return k;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = removeDuplicates(arr, n);
    cout << result << endl;
    cout << "After removing duplicates: ";
    for (int i = 0; i < result; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

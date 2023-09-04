#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int current_element = arr[i];
        int j = i - 1;
        cout<<j<<" " <<current_element<<endl;

        // Compare the current element with elements to its left
        while (j >= 0 && current_element < arr[j]) {
            // Shift elements to the right to make space for the current element
            arr[j + 1] = arr[j];
            j--;
            cout<<j<<endl;
        }

        // Place the current element in its correct position
        arr[j + 1] = current_element;
    }
}

int main() {
    int my_array[] = {12, 11, 13, 5, 6};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    insertionSort(my_array, n);

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;

    return 0;
}

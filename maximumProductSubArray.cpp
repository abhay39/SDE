#include <bits/stdc++.h>
using namespace std;
int maxProductSubarray(int arr[], int n) {
    int maxProduct = arr[0];
    int minProduct = arr[0];
    int maxResult = arr[0];

    for (int i = 1; i < n; i++) {
        // If the current element is negative, swap maxProduct and minProduct
        if (arr[i] < 0) {
            swap(maxProduct, minProduct);
        }

        // Update maxProduct and minProduct based on the current element
        maxProduct = max(arr[i], maxProduct * arr[i]);
        minProduct = min(arr[i], minProduct * arr[i]);

        // Update the final result
        maxResult = max(maxResult, maxProduct);
    }

    return maxResult;
}   
int main()
{
    int arr[]={2,3,-2,4 };
    int n=sizeof(arr)/sizeof(arr[n]);
    int max=maxProductSubarray(arr,n);
    cout<<"The maximum Continuous sum is: "<<max;
    
    return 0;
}
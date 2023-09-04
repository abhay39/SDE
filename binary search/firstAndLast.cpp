#include <bits/stdc++.h>
using namespace std;

vector<int> position(vector<int> nums, int target) {
    int left = 0, right = nums.size() - 1;
    vector<int> res = {-1, -1};

    // Find the leftmost position of the target element
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            res[0] = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Find the rightmost position of the target element
    left = 0;
    right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            res[1] = mid;
            left = mid + 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return res;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9};
    int target = 6;
    vector<int> result;
    result = position(nums, target);
    
    if (result[0] != -1 && result[1] != -1) {
        cout << "First occurrence: " << result[0] << ", Last occurrence: " << result[1] << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}

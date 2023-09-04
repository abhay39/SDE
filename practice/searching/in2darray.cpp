#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Create a vector<vector<int>> as an example
    std::vector<std::vector<int>> nums = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Retrieve a value from nums
    int row = 1; // Index of the outer vector
    int col = 2; // Index of the inner vector
    int value = nums[row][col];
    int result=0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int  j = 0; j < nums.size(); j++)
        {
            if(nums[i][j]==9){
                result=1;
                break;
            }
        }
        
    }
    
    cout<<result;
    return 0;
}

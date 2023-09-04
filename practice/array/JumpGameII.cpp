#include <bits/stdc++.h>
using namespace std;

int maxJump(std::vector<int>& nums) {
    int n = nums.size();
    int jumps = 0;
    int currentEnd = 0;  // The farthest position we can reach from the current jump.
    int farthest = 0;    // The farthest position reachable with the next jump.

    for (int i = 0; i < n - 1; ++i) {
        farthest = std::max(farthest, i + nums[i]);
        
        if (i == currentEnd) {
            jumps++;
            currentEnd = farthest;
        }
    }

    return jumps;
}

int main()
{
    
    int size=0;
    cin>>size;
    vector<int> nums;
    for(int i=1;i<=5;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int result=maxJump(nums);
    cout<<result;
    return 0;
}
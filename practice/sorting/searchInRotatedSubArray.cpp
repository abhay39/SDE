#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
    int low=0,high=nums.size()-1,mid=0;
    int size=nums.size();
    while (low<=high)
    {
        mid= (high-low)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>nums[size-1]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
    
}    
int main()
{
    vector<int>a={4,5,6,7,0,1,2};
    int res=search(a,2);
    cout<<res;
    return 0;
}
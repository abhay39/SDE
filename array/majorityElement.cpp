#include <bits/stdc++.h>
using namespace std;
int majorityElement(int nums[]) {
    int candidate;
    int count = 0;
    int size=sizeof(nums)/sizeof(nums[0]);

    for (int i = 0; i < size; i++)
    {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    

    return candidate;
}    
int main()
{
    int arr[]={1,1,2,2,2,3,4,5,6};
    cout<<majorityElement(arr);
    return 0;
}
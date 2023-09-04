#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int>& a, int low, int high){
    int i=low-1, pivot=a[high];

    for(int j=low;j<high;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}
void quickSort(vector<int>& a,int low, int high){
    if(low<high){
        int pi=pivot(a,low,high);
        quickSort(a,low,pi-1);   
        quickSort(a,pi+1,high);
    }
}
int findMin(vector<int>& nums) {
    int high=nums.size()-1;
    quickSort(nums,0,high);
    int min=nums[0];
    return min;
}    
int main()
{
    vector<int>a={1,2,3,4,5,0,11,6,9,99};
    // cout<<findMin(a)<<endl;
    quickSort(a,0,9);
    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}
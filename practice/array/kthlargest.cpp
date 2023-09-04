#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>& a, int low,int high){
    int pivot=a[high], i= low-1;
    for(int j=low;j<high;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}
void quickSort(vector<int>& a, int low, int high){
    if(low<high){
        int pi=partition(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}
void reverse(vector<int>& a){
    int start=0,end=a.size()-1;
    while(start<=end){
            swap(a[start],a[end]);
            start++;
            end--;
    }
}
int findKthLargest(vector<int>& nums, int k) {
    int low=0,high=nums.size();
    // quickSort(nums,low,high);
    // reverse(nums);
    int maxsofar=0,maxtill=0;
    for (int i = 0; i < high; i++)
    {
        maxtill = nums[i];
        if(maxsofar<maxtill){
            maxsofar=maxtill;
        }
    }
    
    // int kthlargest=nums[k-1];
    return maxsofar;
}    
int main()
{
    vector<int>a={3,2,3,1,2,4,5,5,6};
    // reverse(a);
    int high=a.size()-1;
    int final=findKthLargest(a,4);
    
    //*! quickSort(a,0,high);
    // for(auto i:a){
    //     cout<<i<<" ";
    // }
    cout<<final;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr,int low,int end){
    int mid=(low+end)/2;

    int left=mid-low+1;
    int right=end-mid;

    int *first=new int[left];
    int *second=new int[right];

    int mainArrayIndex=low;
    for (int i = 0; i < left; i++)
    {
        first[i]=arr[mainArrayIndex++];
    }

    for (int i = 0; i < right; i++)
    {
        second[i]=arr[mainArrayIndex++];
    }

    int index1=0;
    int index2=0;
    mainArrayIndex=low;
    while(index1<left && index2<right){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while (index1<left)
    {
       arr[mainArrayIndex++]=first[index1++];
    }
    while (index2<right)
    {
       arr[mainArrayIndex++]=second[index2++];
    }
}    

void mergeSort(vector<int>& arr, int low, int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);

    merge(arr,low,high);
}
int main()
{
    vector<int>arr={9,3,6,2,0};
    int size=5;
    mergeSort(arr,0,size-1);
    for(auto a:arr){
        cout<<a<<" ";
    }
    return 0;
}
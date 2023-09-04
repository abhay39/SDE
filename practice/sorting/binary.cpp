#include <bits/stdc++.h>
using namespace std;
int partition (int arr[], int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(int *arr,int low, int high){
    if(low>=high)return ;
    int pi =partition(arr,low,high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
}
int linearSearch(int arr[],int size, int value){
    // quickSort(arr,0,size);
    sort(arr,arr+size);

    int low=0, high=size-1,mid=0;
    while (low<=high)
    {
        mid=low + (high-low)/2;
        if(arr[mid]==value){
            return mid+1;
        }else if(arr[mid]<value){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
}    
int main()
{
    int arr[]={1,99,56,78,62,45,125,3,6,9,100};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    int res= linearSearch(arr,size,125);
 
    cout<<"Res "<<res;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int value){
    int left=0,right=n-1,mid;
    while (left<=right)
    {
        mid=left + (right-left)/2;
        if(arr[mid]==value){
            return mid+1;
        }
        else if(arr[left]<value){
            left=mid+1;
        }else{
            right = mid - 1 ;
        }
    }
    return -1;
}    
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,99,125,145,1234};
    int n=sizeof(arr)/sizeof(arr[0]);
    int value=1234;
    int index=binarySearch(arr,n,value);
    if (index!=-1)
    {
        cout<<"Element found at position "<<index<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    
    return 0;
}
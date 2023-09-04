#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int value){
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]==value){
            return i+1;
        }
    }
    return -1;
    
}    
int main()
{
    int arr[]={1,9,8,6,4,9,14,2,6,99,123,78};
    int n=sizeof(arr)/sizeof(arr[0]);
    int value=1234;
    int index=linearSearch(arr,n,value);
    if (index!=-1)
    {
        cout<<"Element found at position "<<index<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    
    return 0;
}
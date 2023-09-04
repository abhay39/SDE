#include <bits/stdc++.h>
using namespace std;
// using linear search
// int isThereOrNot(int arr[], int n,int val)    {
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return 1;
//         }
//     }
//     return -1;
// }
int isThereOrNot(int arr[], int n,int val)    {
    int low=0,high=n-1,mid=0;
    sort(arr,arr+n);
    while (low<=high)
    {
        mid=low + (high-low)/2;
        if(arr[mid]==val){
            return 1;
        }else if(arr[mid]<val){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
    
}
int main()
{
    int n=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int val=0;
    cin>>val;
    int result=isThereOrNot(arr,n,val);
    {result==1?cout<<"Yes the value exits!!":cout<<"No the value doesn't exits!!";};
    return 0;
}
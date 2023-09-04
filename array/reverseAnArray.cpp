#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int low=0,high=n-1;
    while (low<=high)
    {
       swap(arr[low],arr[high]);
       low++;
       high--;
    }   
}    
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
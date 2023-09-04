#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int n){
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
    int n=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr,n);
    cout<<"After after reversing.";
    for (auto x:arr ) cout<<x<<" ";
    return 0;
}
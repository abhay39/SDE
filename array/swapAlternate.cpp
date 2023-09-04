#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
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
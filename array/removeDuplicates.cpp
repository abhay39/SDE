#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(it arr[],int n){
    int k=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i+1]){
            arr[k]=arr[i];
        }
        if (arr[i+1]==arr[i-1])
        {
            
        }
        
    }
    
}    
int main()
{
    int arr[]={1,1,1,2,2,3};
    int size=6;
    return 0;
}
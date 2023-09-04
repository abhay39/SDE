#include <bits/stdc++.h>
using namespace std;
void deleting(int arr[],int size,int position){
    for(int i=position; i<size-1;++i){
        arr[i]=arr[i+1]; //shift to left
    } 
    size--;
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j]<<" ";
    }
       
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    deleting(arr,9,4);
    return 0;
}
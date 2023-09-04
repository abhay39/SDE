#include <bits/stdc++.h>
using namespace std;
void inserting(int arr[],int size,int position,int value){
    for(int i=size; i>position;--i){
        arr[i]=arr[i-1];
    }
    arr[position]=value;
    size++;
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j]<<" ";
    }
       
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    inserting(arr,9,4,125);
    return 0;
}
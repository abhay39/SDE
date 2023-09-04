#include <bits/stdc++.h>
using namespace std;
void insertAtPoint(int arr[],int size, int index,int value){
    if (index<0 || index>=size){
        cout<<"Invalid Index";
    }
    for (int i = size; i > index; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=value;
    size++;

    cout<<"\nAfter inserting an elements : \n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}    
void deleteAtPoint(int arr[],int size, int index){
    if (index<0 || index>=size){
        cout<<"Invalid Index";
    }
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;

    cout<<"\nAfter Deleting an elements : \n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}    
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    cout<<"Before inserting an elements : \n";
    for(auto i:arr){
        cout<<i<<" ";
    }
    // insertAtPoint(arr,size,10,11);
    // deleteAtPoint(arr,size,10);
    // deleteAtPoint(arr,size,5);
    arr[9]={99};
    cout<<"\nAfter updating an elements : \n";
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}
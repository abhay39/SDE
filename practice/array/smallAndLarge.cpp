#include <bits/stdc++.h>
using namespace std;
int secondMin(int arr[],int size){
    sort(arr,arr+size);
    return arr[1];
}    
int secondMax(int arr[],int size){
    sort(arr,arr+size);
    return arr[size-2];
}    
int main()
{
    int arr[]={1,25,5,6,7,8,9,11,99,125,144};
    int min=secondMin(arr,11);
    int max=secondMax(arr,11);
    cout<<"Min :"<<min<<" And Max is : "<<max;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int size, int value){
    for (int  i = 0; i < size; i++)
    {
        if(value==arr[i]){
            return i+1;
        }
    }
    
    return -1;
}    
int main()
{
    int arr[]={1,99,56,78,62,45,125,3,6,9,100};
    int size=sizeof(arr)/sizeof(arr[0]);

    int res= linearSearch(arr,size,125);
 
    cout<<"Res "<<res;
    return 0;
}
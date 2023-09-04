#include <bits/stdc++.h>
using namespace std;
void rs(int arr[],int low, int high){
    while (low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    
}
void reverser(int arr[],int t,int lenght){
    
    t=t%lenght;
    rs(arr,0,lenght-1);
    for(int i=0;i<lenght;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rs(arr,0,t-1);
    for(int i=0;i<lenght;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    rs(arr,t,lenght-1);
    for(int i=0;i<lenght;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}    
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int target=3;
    reverser(arr,target,7);
    for(auto a:arr){
        cout<<a<<" ";
    }
    
    return 0;
}
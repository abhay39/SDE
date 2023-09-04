#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int size){
    int maxSoFar=0,maxgoing=0;
    for(int i=0;i<size;i++){
        maxgoing += arr[i];
        if (maxSoFar<maxgoing)
        {
            maxSoFar=maxgoing;
        }
        if(maxgoing<0){
            maxgoing=0;
        }
        
    }
    return maxSoFar;
}    
int main()
{
    int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=maxSum(arr,size);
    cout<<"The max sum in array is : "<<sum;
    return 0;
}
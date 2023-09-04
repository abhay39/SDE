#include <bits/stdc++.h>
using namespace std;
void medianOfSorted(int arr[],int brr[],int size){
    vector<double>finalArray;
    for (int  i = 0; i < size; i++)
    {
        finalArray.push_back(arr[i]);
    }
    for (int  i = 0; i < size; i++)
    {
         finalArray.push_back(brr[i]);
    }
    for (int  i = 0; i < l; i++)
    {
        cout<<finalArray[i]<<" ";
    }
    for (int  i = 0; i < l; i++)
    {
        if(i==0){
            finalArray.push_back(finalArray[i]);
        }
    }
    
    double leng=finalArray.size();
    leng=(leng+1)/2;
    cout<<leng;
    
}    
int main()
{
    int arr[]={1,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int brr[]={2};
    // double median=medianOfSorted(arr,brr,size);
    // cout<<median;
    medianOfSorted(arr,brr,size);
    return 0;
}
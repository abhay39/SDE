#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int arr[]={2,0,2,1,1,0};
    int zero=0,one=0,two=0;
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<arrSize;i++){
        if(arr[i]==0){
            zero++;
        }else if(arr[i]==1){
            one++;
        }else{
            two++;
        }
    }
    for (int  i = 0; i < zero; i++)
    {
       arr[i]=0;
    }
    for (int  i = zero; i < (arrSize-two); i++)
    {
       arr[i]=1;
    }
    for (int  i = (arrSize-two); i < arrSize; i++)
    {
       arr[i]=2;
    }
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
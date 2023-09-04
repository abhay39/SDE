#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int size){
    int round, i, temp;
    for (int round = 1; round <= size-1; round++)
    {
        for (int i = 0; i <=size-1-round; i++)
        {
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        
    }  
}    
int main()
{
    int a[]={34,15,29,8,1,99,125,34,986,145};
    int i;
    bubbleSort(a,10);
    for(auto aa:a){
        cout<<aa<<" ";
    }
    return 0;
}
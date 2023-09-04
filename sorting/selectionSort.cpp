#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int size){
    int minIndex;
    for(int i=0;i<size-1;i++){
        minIndex=i;
        for(int j=i+1;j<size;j++){
            if(a[j]<a[minIndex]){
                minIndex=j;
            }
        }
        swap(a[i],a[minIndex]);
    } 
}    
int main()
{
    int a[]={34,15,29,8,1,99,125,34,986,145};
    int i;
    selectionSort(a,10);
    for(auto aa:a){
        cout<<aa<<" ";
    }
    return 0;
}
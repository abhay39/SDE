#include <bits/stdc++.h>
using namespace std;
void bestTime(int arr[],int n){
    int buy=arr[0],profit=0,totalProfit=0;
    for(int i=0;i<n;i++){
        if (buy>arr[i]){
            buy=arr[i];
            cout<<"\nBuy :"<<buy<<"at position :"<<i<<endl;
        }
        profit = arr[i]-buy; // 5-1 = 4
        cout<<"\nProfit :"<<profit<<"at position :"<<i<<endl;
        // totalProfit=profit;
        // cout<<"Total Profit :"<<totalProfit<<"at position :"<<i<<endl;
        if(totalProfit<profit){
            totalProfit=profit;
            cout<<"Total Profit :"<<totalProfit<<"at position :"<<i<<endl;
        }
    }
    // if(profit<buy){
    //     return 0;
    // }
    // return totalProfit;
    cout<<"Total Profit :"<<totalProfit<<"at final position :"<<endl;
}    
int main()
{
    int n[]={7,6,4,3,1};
    for(auto i:n){
        cout<<i<<" ";
    }
    // cout<<bestTime(n,6);
    bestTime(n,6);
    return 0;
}
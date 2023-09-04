#include <bits/stdc++.h>
using namespace std;
void bestTime(int arr[],int n){
    int buy=arr[0],profit=0,totalProfit=0,lastprofit=0;
    for(int i=0;i<n;i++){
        if (buy>arr[i]){
            buy=arr[i]; // 1
            cout<<"\nBuy :"<<buy<<" at position : "<<i<<endl;
        }
        profit = arr[i]-buy; // 4
        cout<<" Profit :"<<profit<<" at  position."<<i<<endl;
        if(totalProfit<profit){
            totalProfit+=profit;
            lastprofit =lastprofit+ totalProfit;
            cout<<" TotalProfit :"<<totalProfit<<" at  position."<<i<<endl;
            cout<<" Last profit :"<<lastprofit<<" at  position."<<i<<endl;
            buy=arr[0];
            cout<<"\nBuy :"<<buy<<" at position : "<<i<<endl;
        }
    }
    if(lastprofit>0){
        cout << "Total Profit is: " << lastprofit ;
    }else{
        cout << "Total Profit is: " << lastprofit ;
    }
    
}    
int main()
{
    int n[]={1,2,3,4,5};
    // for(auto i:n){
    //     cout<<i<<" ";
    // }
    // cout<<bestTime(n,6);
    bestTime(n,5);
    return 0;
}
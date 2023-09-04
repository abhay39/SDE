#include <bits/stdc++.h>
using namespace std;

vector<int>minMax(vector<int>arr,int n) {
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if (arr[i]> max ){
            max  = arr[i] ;
        }
    }
    vector<int> out={min,max};
    return out;
}   

int main()
{
    int n=0;
    cin>>n;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        int a=0;
        cin>>a;
        arr.push_back(a);
    }
    vector<int>result=minMax(arr,n);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    
    
    return 0;
}
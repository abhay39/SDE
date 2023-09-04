#include <bits/stdc++.h>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans= ans^arr[i];
    }
    return ans;
}    
int main()
{
    int n[9]={0,0,1,5,1,5,4,6,4};
    int a=unique(n,9);
    cout<<a;
    return 0;
}
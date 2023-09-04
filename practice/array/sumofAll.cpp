#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int n=0;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(auto a:arr){
        sum +=a;
    }
    cout<<sum<<endl;
    
    return 0;
}
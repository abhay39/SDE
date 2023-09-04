#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int n[]={3,0,1};
    int m=sizeof(n)/sizeof(n[0]);
    int sum=0;
    for (int  i = 0; i <= m; i++)
    {
        sum +=i;
    }
    cout<<"sum is : "<<sum<<endl;
    for (int  i = 0; i < m; i++)
    {
        sum -=n[i];
    }
    cout<<"Missing Number is : "<<sum;
    
    return 0;
}
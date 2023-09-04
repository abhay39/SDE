#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int n=1,m=2;
    // int temp=n;
    // n=m;
    // m=temp;
    // n=n^m;
    // m=n^m;
    // n=n^m;
    // n=n+m; // 1+ 2 =3
    // m=n-m; // 3-2 = 1 
    // n=n-m; // 3 -1=2
    // swap(n,m);
    // cout<<"N :"<<n<<" M :"<<m;
    int arr[]={1,2,3,4,5,6,7,8,9};
    for(auto i:arr){
        if(i%2==0){
            cout<<"even "<<i<<endl;
        }else{
            cout<<"Odd "<<i<<endl;
        }
    }
    return 0;
}
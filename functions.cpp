#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
    int c=a+b;
    return c;
}

void aa(int &a, int &b){
    a=30,b=40;
    // cout<<"The sum of a and b is : "<<c;
}    
int main()
{
    int a=20,b=10;
    int res=add(a,b);
    cout<<res;
    // cout<<&a; 
    return 0;
}
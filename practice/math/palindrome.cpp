#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n){
    if(n<0){
        return false;
    }
    int res=0,original=n;
    while(n!=0){
        int digit=n%10;
        res = res*10+digit;
        n /=10;
    }
    return original==res;
}    

int main()
{
    int n=121;
    bool a= (n == 121);
    cout<<isPalindrome(n);
    cout<<a;
    return 0;
}
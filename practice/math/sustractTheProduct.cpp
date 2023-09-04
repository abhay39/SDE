#include <bits/stdc++.h>
using namespace std;
int diffe(int n){
    if (n == 1) return 0;
    int sum=0,product=1;
    while (n>0)
    {
        int digit=n%10;
        sum +=digit;
        product *=digit;
        n /= 10;
    }
    
    return product-sum;    

}    
int main()
{
    int n=234;
    int res=diffe(n);
    cout<<res;
    return 0;
}
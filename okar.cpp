#include <bits/stdc++.h>
using namespace std;
void superPow(int a, vector<int>& b) {
    string res;
    for(int i=0;i<b.size();i++){
        res+=to_string(b[i]);
    }
    int digit=stoi(res);
    unsigned long int finalresult=pow(a,digit);
    // return finalresult;
    cout<<finalresult;
}    
int main()
{
    int n=2147483647;
    vector<int>a={2,0,0};
    // int res=superPow(n,a);
    // cout<<res;
    superPow(n,a);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
string merge(string a,string b){
    int i=0,j=0;
    string res;
    while((i<a.size())&&(j<b.size())){
        res +=a[i];
        res +=b[j];
        i++,j++;
    }
    while (i<a.size())
    {
         res +=a[i];
         i++;
    }
    while (j<b.size())
    {
         res +=b[j];
         j++;
    }

    return res;
}    
int main()
{
    string n="abcd";
    string m="pq";
    string z=merge(n,m);
    cout<<z;
    return 0;
}
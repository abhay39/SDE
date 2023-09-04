#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    list<int> a;
    list<int> b={1,2,3,4,5};
    list<int> c={7,6,8,9,10};

    a.merge(b);
    a.merge(c);

    for(auto i:a){
        cout<<i<<" ";
    }
    return 0;
}
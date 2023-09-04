#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    string names[]={"Abhay","Abhi","Aa","Bimalesh"};
    int size=sizeof(names)/sizeof(names[0]);
    sort(names,names+size);
    for (auto name:names)
        cout<<name<<" ";
    return 0;
}
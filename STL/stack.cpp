#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    stack<string>a;
    a.push("Abhay");
    a.push("Kumar");
    a.push("Gupta");
    cout<<a.top()<<endl;
    a.pop();
    cout<<a.top()<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    vector<int>a;
    
    // adding element to vector a
    a.push_back(5); 
    a.push_back(10);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    // removing element from  vector from back using pop_back
    // a.pop_back();
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // to check the the capacity of vector
    cout<<a.capacity()<<endl;

    // to check the size of vector
    cout<<a.size()<<endl;

    // to get the element at fixed index of vector
    cout<<a.at(0)<<endl;

    // copying all the values of a to b
    vector<int>b(a);

    for(auto i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
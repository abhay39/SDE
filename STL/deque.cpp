#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    deque<int>a;
    
    // adding element to deque to back
    a.push_back(5); 
    a.push_back(10);

    // adding element to deque to front
    a.push_front(25); 

    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // removing element from  deque from back using pop_back & pop_front
    a.pop_back();
    a.pop_front();
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // to check the the max size of deque
    cout<<a.max_size()<<endl;

    // to check the size of deque
    cout<<a.size()<<endl;

    // to get the element at fixed index of deque
    cout<<a.at(0)<<endl;

    // copying all the values of a to b
    deque<int>b(a);

    for(auto i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
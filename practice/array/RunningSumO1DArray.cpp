#include <bits/stdc++.h>
using namespace std;
vector<int>runningSum(vector<int>a,int size){
    int sum=0;
    vector<int>res;
    for(int i=0;i<size;i++){
        sum +=a[i];
        res.push_back(sum);
    }
    return res;
}    
int main()
{
    vector<int>a={1,2,3,4};
    vector<int>r=runningSum(a,4);
    for (auto x: r){
        cout<<x<<" ";
    }
    
    return 0;
}
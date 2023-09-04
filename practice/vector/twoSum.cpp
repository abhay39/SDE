#include <bits/stdc++.h>
using namespace std;
vector<int>getSum(vector<int>a,int target){
    int n=a.size();
    vector<int>res;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                res.push_back(i);
                res.push_back(j);
                break;
            }
        }
    }
    return res;
}    
int main()
{
    vector<int>a={2,7,11,15};
    vector<int>b=getSum(a,9);
    for(auto i:b){
        cout<<i<<" ";
    }
    return 0;
}
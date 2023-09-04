#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>a;
    int size=n+m;

    for(int i=0;i<m;i++){
        a.push_back(nums1[i]);
    }
    for(int i=0;i<n;i++){
        a.push_back(nums2[i]);
    }
    sort(a.begin(),a.end());
    for(auto i:a){
        cout<<i<<" ";
    }
}    
int main()
{
    
    vector<int>a={1,2,3,0,0,0};
    vector<int>b={2,5,6};
    int m=3,n=3;

    merge(a,m,b,n);

    return 0;
}
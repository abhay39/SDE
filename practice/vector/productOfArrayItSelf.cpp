#include <bits/stdc++.h>
using namespace std;
vector<int>product(vector<int>&a){
    vector<int>finalres;
    if ( a.size() == 1 ) {
        return finalres;
    }
    for(int i=0;i<a.size();i++){
        int product=0;
        for(int j=0;j<a.size();j++){
            if(a[i]==a[j]){
              continue;  
            }else{
                product*=a[j];
            }
        }
        finalres.push_back(product);
        
    }
    return finalres;
}    
int main()
{
    vector<int>a={1,2,3,4};
    vector<int>b=product(a);
    for (auto i:b){
        cout<<i<<" ";
    }
    return 0;
}
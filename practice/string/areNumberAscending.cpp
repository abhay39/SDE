#include <bits/stdc++.h>
using namespace std;
bool areNumbersAscending(string s) {
    vector<int>a;
    for(auto i:s){
        if(isdigit(i)){
            a.push_back(i);
        }
    }
    
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }else if(a[i]==a[i+1]){
            return false;
        }
        else{ 
            return true;
        }
    }
    return true;
}    
int main()
{
    string a="run white brave 1 13 16 laugh";
    bool ans=areNumbersAscending(a);
    cout<<ans;
    
    return 0;
}
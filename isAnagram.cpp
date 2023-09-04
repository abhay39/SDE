#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string a, string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
    
}    
int main()
{
    string a="abhay",b="yahab";
    int result=isAnagram(a,b);
    if(result==1){
        cout<<"Yes";
    }else 
        cout<< "No" ;
    
    return 0;
}
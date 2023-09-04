#include <bits/stdc++.h>
using namespace std;
int getDigit(string a){
    string temp="";
    for(auto i:a){
        if(isdigit(i)){
            temp.push_back(i);
        }
    }
    long int res= stoi(temp);
    return res;
}    
int main()
{
    string a="words of 4930";
    long int result=getDigit(a);
    cout<<result;
    return 0;
}
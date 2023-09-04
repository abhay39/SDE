#include <bits/stdc++.h>
using namespace std;
bool validParenthesis(string s){
    stack<char> stk;
    for(int i=0;i<s.length();i++){
        if(stk.size()==0){
            stk.push(s[i]);
        }else if(stk.top()=='(' && s[i]==')' || stk.top()=='[' && s[i]==']' || stk.top()=='{' && s[i]=='}' ){
            stk.pop();
        }else{
            stk.push(s[i]);
        }
    }
    if(stk.size()==0){
        return true;
    }
    return false;
}    
int main()
{
    string s="()";
    bool ans=validParenthesis(s);
    cout<<ans<<" ";
    return 0;
}
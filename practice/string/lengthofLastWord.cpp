#include <bits/stdc++.h>
using namespace std;
string trim(string str) {
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first) {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

int lengthOfLastWord(string s) {
    string a=trim(s);
    reverse(a.begin(),a.end());
    int count=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==' '){
            break;
        }else{
            count++;
        }
    }
    return count;
}    
int main()
{
    string a="  fly me to the moon  ";
    int l=lengthOfLastWord(a);
    cout<<l;
    return 0;
}
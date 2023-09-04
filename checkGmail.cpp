#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    string username="bali";
    int password=1234;
    int attemp=0;
    string given;
    int pp=0;
    cout<<"Enter your username : ";
    cin>>given;
    cout<<"Enter your 4 digit password : ";
    cin>>pp;

    for(int i=0;i<5;i++){
        if(given==username && password==pp){
            cout<<"Successfully logged in!!!.";
            break;
        }
        else{
            cout<<"Wrong Username or Password!!!"<<endl;
            ++attemp;
            cout<<"Enter your username : ";
            cin>>given;
            cout<<"Enter your 4 digit password : ";
            cin>>pp;
        }
    }
    if(attemp==5){
        cout<<"You have exceeded the maximum number of attempts, therefore you are blocked now!..."<<endl;
    }

    return 0;
}
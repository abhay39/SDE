#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next=nullptr;
    Node(int val){
        data =val ;
    }
};
int getVal(int index){
    Node* temp=nullptr;
    if (index==0){
        cout<<"first"<<endl;
        return temp->data;
    }else{
        Node* temp=nullptr;
        int i=0;
        while (i!=index)
        {
            temp=temp->next;
            i++;
        }
        return temp->data;   
    }
}    
int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* tail=new Node(50);

    head->next=second,second->next=third,third->next=fourth,fourth->next=tail,tail->next=nullptr;

    head=getVal(2);
    cout<<head->data;
    return 0;
}
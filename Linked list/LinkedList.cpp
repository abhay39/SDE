#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next = NULL;
    ListNode(int val){
        data=val;
    }
};
    
int main()
{
    ListNode* a=new ListNode(10);
    ListNode* b=new ListNode(20);
    ListNode* c=new ListNode(30);
    ListNode* d=new ListNode(40);

    a->next=b,b->next=c,c->next=d,d->next=NULL;

    while(a!=NULL){
        cout<<"Element: "<<a->data<<"\n";
        a=a->next;
    }
    return 0;
}
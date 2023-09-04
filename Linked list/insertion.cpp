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
void print(ListNode* head){
    while(head!=NULL){
        cout<<"Element: "<<head->data<<"\n";
        head=head->next;
    }
}

void insertAtFirst(ListNode* &head,int val){
    ListNode* temp=new ListNode(val);
    temp->next=head;
    head=temp;
}

void insertAtIndex(ListNode *head,int val,int index){
    ListNode* temp=new ListNode(val);
    ListNode* temp2=head;
    int i=0;
    while (i!=index-1)
    {
        temp2=temp2->next;
        i++;
    }
    temp->next=temp2->next;
    temp2->next=temp;    
}

void insertAtLast(ListNode *head,int val){
    ListNode* temp=new ListNode(val);
    while (head->next!=NULL)
    {
        head=head->next;
    }
    head->next=temp;
    temp->next=NULL;
}

void insertAtNode(ListNode *head,ListNode *prevNode,int val){
    ListNode* temp=new ListNode(val); 
    temp->next=prevNode->next;
    prevNode->next=temp;
}

int main()
{
    ListNode* a=new ListNode(10);
    ListNode* b=new ListNode(20);
    ListNode* c=new ListNode(30);
    ListNode* d=new ListNode(40);

    a->next=b,b->next=c,c->next=d,d->next=NULL;
    
    //*! Before Insertion
    cout<<"\tBefore Insertion \n";
    print(a);

    // //*! After Insertion in head
    // insertAtFirst(a,60);
    // cout<<"\tAfter Insertion in head \n";
    // print(a);

     //*! After Insertion in Given Index.
    // insertAtIndex(a,180,3);
    // cout<<"\tAfter Insertion in Given Index \n";
    // print(a);

    //*! After Insertion in Last.
    // insertAtLast(a,300);
    // cout<<"\tAfter Insertion in Last Index \n";
    // print(a);

    //*! After Insertion at Node.
    insertAtNode(a,d,1500);
    cout<<"\tAfter Insertion in Last Index \n";
    print(a);
    
    return 0;
}
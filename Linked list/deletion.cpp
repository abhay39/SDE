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

void deleteFirst(ListNode* &head){
    ListNode* temp=head;
    head=head->next;
    free(temp);
}

void deleteAtIndex(ListNode *head, int index){
    // ListNode* temp=new ListNode(val);
    ListNode* temp1=head;
    ListNode* temp2=head->next;
    int i=0;
    while (i!=index-1)
    {
        temp1=temp1->next;
        temp2=temp2->next;
        i++;
    }
    temp1->next=temp2->next;
    free(temp2); 
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
    
    //*! Before Deletion
    cout<<"\tBefore Deletion \n";
    print(a);

    //*! After Deletion of head
    // deleteFirst(a);
    // cout<<"\tAfter Deletion in head \n";
    // print(a);

     //*! After Deletion in Given Index.
    deleteAtIndex(a,3);
    cout<<"\tAfter Deletion in Given Index \n";
    print(a);

    //*! After Insertion in Last.
    // insertAtLast(a,300);
    // cout<<"\tAfter Insertion in Last Index \n";
    // print(a);

    //*! After Insertion at Node.
    // insertAtNode(a,d,1500);
    // cout<<"\tAfter Insertion in Last Index \n";
    // print(a);
    
    return 0;
}
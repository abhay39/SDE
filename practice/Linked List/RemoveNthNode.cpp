#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next=NULL;
    Node(int val){
        data =val ;
    }
};
void print(Node* head){
    while (head!= NULL) {
        cout<<head->data<<" ";
        head = head ->next;
    }
}

void deleteAtNthNode(Node* head,int index){
    int i=0;
    Node* temp1=head;
    Node* temp2=head->next;
    while (i!=index-1)
    {
        temp1=temp1->next;
        temp2=temp2->next;
        i++;
    }
    temp1->next=temp2->next;
    free(temp2);
}
int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* four=new Node(4);
    Node* five=new Node(5);
    head->next=second, second->next=third,third->next=four,four->next=five,five->next=NULL;

    int index=2;

    cout<<"Before deletion: \n";
    print(head);
    
    cout<<"\nAfter deletion: \n";
    deleteAtNthNode(head,index);
    print(head);

    return 0;
}
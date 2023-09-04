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
 
int linearSearch(Node* head, int val){
    Node* temp=head;
    while (temp!=nullptr)
    {
        if(temp->data==val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;    
}


void print(Node* head){
    while(head != nullptr ){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}

int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* five=new Node(50);

    head->next=second,second->next=third,third->next=fourth,fourth->next=five,five->next=nullptr;

    int valueToSearch=0;
    cin>>valueToSearch;

    int res=linearSearch(head,valueToSearch);
    cout<<res;
    

   
    // print(head);

    return 0;
}
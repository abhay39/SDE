#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        //*! constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void print(Node* &head){
    Node* temp = head;
    while (temp!= NULL) {
        cout<<temp->data<<" ";
        temp = temp -> next ;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
}
int main()
{
    Node* first=new Node(10);
    Node* second=new Node(40);
    Node* last=new Node(30);

    Node* head=first;
    print(head);

    insertAtHead(head,20);
    print(head);

    
    return 0;
}
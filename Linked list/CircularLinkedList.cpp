#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next=nullptr;
    Node(int val){
        data =val ;
    }
};

// void appendNode(Node* &head, int val) {
//     Node* newNode = new Node(val);
//     if (!head) {
//         head = newNode;
//     } else {
//         Node* current = head;
//         while (current->next) {
//             current = current->next;
//         }
//         current->next = newNode;
//     }
// }

void print(Node* head){
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
Node* insertAtFirst(Node* &head, int data){
    Node* ptr=new Node(data);
    Node* temp=head->next;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
Node* insertAtLast(Node* &head, int data){
    Node* ptr=new Node(data);
    Node* temp=head->next;

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=head;

}
void insertAtNthIndex(Node* &head, int data,int index){
    Node* ptr=new Node(data);
    Node* temp=head;
    if(head==nullptr){
        ptr->next=ptr;
        head=ptr;
        return;
    }

    int i=0;
    while(i!=index-1){
        temp=temp->next;
        i++;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    if(index=0){
        head=ptr;
    }
}
void insertAtNode(Node *head,Node *prevNode,int val){
    Node* temp=new Node(val); 
    temp->next=prevNode->next;
    prevNode->next=temp;
}
int main()
{
    // Node* head=nullptr;
    // int n=0;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // cout<<"Starting to take input from users: \n";

    // for (int i = 0; i < n; i++)
    // {
    //     int b=0;
    //     cin>>b;
    //     appendNode(head ,b);
    // }

    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* four=new Node(40);

    head->next=second,second->next=third,third->next=four,four->next=head;
    
    cout<<"Starting to print data stored in liked list: \n";
    print(head);

    //*! Inserting values at first index
    // cout<<"Inserting values at first at liked list: \n";
    // Node* newData=insertAtFirst(head,50);
    // cout<<newData->data;

    //*! Inserting values at nth index  
    // insertAtNthIndex(head,99,2);
    // cout<<"Inserting values at Nth index at liked list: \n";
    // print(head);

    //*! Inserting values at last index  
    // insertAtLast(head,99);
    // cout<<"Inserting values at Last index at liked list: \n";
    // print(head);


    //*! Inserting values at Node index  
    insertAtNode(head,second,99);
    cout<<"Inserting values at Node liked list: \n";
    print(head);
    

    return 0;
}
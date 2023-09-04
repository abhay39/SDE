#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next=nullptr;
    Node(int val){
        data =val ;
    }
};

void appendNode(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=nullptr;
    int n=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Starting to take input from users: \n";

    for (int i = 0; i < n; i++)
    {
        int b=0;
        cin>>b;
        appendNode(head ,b);
    }
    
    cout<<"Starting to print data stored in liked list: \n";

    print(head);

    return 0;
}
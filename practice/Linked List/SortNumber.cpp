#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next=nullptr;
    Node(int val){
        data =val ;
        next=nullptr;
    }
};

void print(Node* head){
    Node* temp=head;
    while (temp!= NULL) {
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    delete temp;
}

void appendList(Node*& list1, Node* list2) {
    if (!list1) {
        list1 = list2;
    } else {
        Node* current = list1;
        while (current->next) {
            current = current->next;
        }
        current->next = list2;
    }
}

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

void partition(Node* head,int pivot, Node*& less, Node*& equal, Node*& greater){
    Node* current=head;

    while (current)
    {
        if(current->data<pivot){
            appendNode(less,current->data);
        }else if(current->data == pivot){
            appendNode(equal,current->data);
        }else{
            appendNode(greater,current->data);
        }
        current=current->next;
    }
}

Node* quickSort(Node* head){
    if(!head || !head->next) return head;

    int pivot=head->data;
    Node* less=nullptr;
    Node* equal=nullptr;
    Node* greater=nullptr;

    partition(head,pivot,less,equal,greater);

    less=quickSort(less);
    greater=quickSort(greater);

    Node* sorted=nullptr;
    appendList(sorted,less);
    appendList(sorted,equal);
    appendList(sorted,greater);

    return sorted;
}

int main()
{
    Node* head=new Node(4);
    appendNode(head,2);
    appendNode(head,1);
    appendNode(head,3);

    cout<<"Before Sorting\n";
    print(head);

    head=quickSort(head);

    cout<<"\nAfter Sorting\n";
    print(head);

    while (head)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    

    return 0;
}
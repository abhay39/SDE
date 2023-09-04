#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next=NULL;
    Node(int val){
        data =val ;
    }
};

Node* addTwoNumber(Node* a, Node* b){
    //Your code here.
    int i=0,j=0;
    long long sum= 0 , carry=0;
    while (a!= NULL ||b != NULL) {
        sum += ((long)(carry)) + (((long)((a == NULL)? 0 : a->data)))+(((long)((b==NULL
        ):b ->data)));
    }
    
}
int main()
{
    Node* head=new Node(20);
    Node* second=new Node(40);
    Node* last=new Node(50);

    head->next=second, second->next=last,last->next=NULL;

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;  
    }
    return 0;
}
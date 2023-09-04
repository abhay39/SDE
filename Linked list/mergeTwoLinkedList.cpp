#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};    
int main()
{
    ListNode* head=new ListNode(2);
    ListNode* second=new ListNode(3);
    ListNode* third=new ListNode(5);

    head->next = second;
    second->next=third;
    third->next=NULL;

    // ListNode* temp=head;

    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }

    return 0;
}
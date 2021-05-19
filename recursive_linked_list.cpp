#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
    data=val;
    next=NULL;
}
};
void insertAtTail(Node* &head,int val){
Node* n=new Node(val);
Node* temp=head;
if(head==NULL){
    head=n;
    return;
}
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
Node* recursive_printlinked(Node* &head){
    if(head->next==NULL || head==NULL){
        return head;
    }
    Node* newHead=recursive_printlinked(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;

}
int main(){
Node* head=NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
display(head);
Node* newhead=recursive_printlinked(head);
display(newhead);
}

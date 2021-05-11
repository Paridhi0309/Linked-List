#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next=NULL;
    Node(int val){
    data=val;
    next=NULL;
    }
};
void insertAtTail(Node* &head,int val){
    Node *n=new Node(val);
    Node*temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
Node *head=NULL;
insertAtTail(head,100);
insertAtTail(head,200);
insertAtTail(head,300);
insertAtTail(head,400);
display(head);
}

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
void display(Node* head){
    Node* temp=head;
while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        }
        cout<<"NULL"<<endl;
}
void lengthlinkedlist(Node *head){
    Node* temp=head;
    int Count=0;
while(temp!=NULL){
    Count++;
    temp=temp->next;
}
cout<<Count;
}
int main(){
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    lengthlinkedlist(head);

}


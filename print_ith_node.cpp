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
void print_ithnode(Node* head,int j){
    int Count=0;
    Node* temp=head;
    while(temp!=NULL){
        if(Count==j){
            cout<<temp->data;
        }
        Count++;
        temp=temp->next;
    }


}


int main(){
    Node* head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    display(head);

    int i=3;
    print_ithnode(head,i);
}

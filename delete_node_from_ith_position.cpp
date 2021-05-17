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
Node* delete_ith_node(Node *head,int i){
    int Count=0;
    Node* prev=NULL,*temp=head;
    if(i==0){
        head=temp->next;
    return head;
    }
    while(temp!=NULL){
    if(Count==i){
        prev->next=temp->next;
        delete(temp);
        break;

    }
    prev=temp;
    temp=temp->next;
    Count++;
    }
return head;
}
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
    Node*temp=head;
    while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
Node* head=NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
display(head);
int i=0;
head=delete_ith_node(head,i);
display(head);

}

#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node (int data){
    this->data=data;
    this->next=NULL;
}
~Node(){
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
}


};
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
//insert at head
if(position==1){
    insertAtHead(head,d);
    return;
}

int cnt=1;
Node* Nodetoinsert=new Node(d); 
Node* temp=head;
while(cnt<position-1){
  temp=temp->next;
  cnt++;
}
//insert at tail
if(temp->next==NULL){
insertAtTail(tail,d);
return;
}
//insert at any position
Nodetoinsert->next=temp->next;
temp->next=Nodetoinsert;
}
void Remove(Node* &head)
{
    if(head==NULL && head->next==NULL)
    {
        return;
    }
    Node* curr=head;
    while(curr!=NULL)
    {if(curr->next==NULL)
    {
        return;
    }
    if(curr->next->data==curr->data)
    {
        if(curr->next->next==NULL)
    {
        return;
    }
        Node* temp=curr->next->next;
        curr->next->next=NULL;
        delete curr->next;
        curr->next=temp;
    }
    else
    {
        curr=curr->next;
    }
    
    }
}


void Print(Node* &head){
Node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;}


int main(){
    Node* node=new Node(10);
    Node* head=node;
    Node* tail=node;
   

    insertAtPosition(tail,head,2,20);
    Print(head);
    insertAtPosition(tail,head,3,20);
    Print(head);
    insertAtPosition(tail,head,4,30);
    Print(head);
    insertAtPosition(tail,head,5,30);
    Print(head);
    insertAtPosition(tail,head,6,30);
    Print(head);
    insertAtPosition(tail,head,7,30);
    Print(head);
    insertAtPosition(tail,head,8,40);
    Print(head);
    insertAtPosition(tail,head,9,50);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    Remove(head);
    Print(head);
    
}
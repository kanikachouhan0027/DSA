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

void Delete(Node* &head,Node* &tail,int position)
{
if (position==1)
{
Node* temp=head;
head=temp->next;
temp->next=NULL;
delete temp;
}
else
{
    int cnt=1;
    Node* previous=head;
    Node*current=head;
    while(cnt<position){
       previous=current;
       current=current->next;
       cnt++;
    }
    if(current->next==NULL)
{
previous->next=NULL;
tail=previous;
delete current;
}
else{
    previous->next=current->next;
    current->next=NULL;
    delete current;

}}}
//by data
void Delete(Node* &head,Node* &tail,int data)
{
    if(head->data==data)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
    Node* current=head;
    Node* previous=current;
    while(current->data!=data)
    {   previous=current;
        current=current->next;
    }
    if(current->next==NULL)
    {
        previous->next=NULL;
        tail=previous;
        delete current;
    }
    else
    {
        previous->next=current->next;
        current->next=NULL;
        delete current;
    }
}}

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
    Print(head);
//insertAtHead(head,20);
//insertAtHead(head,30);
//insertAtHead(head,40);
//Print(head);

// insertAtTail(tail,20);
// Print(head);
// insertAtTail(tail,30);
// Print(head);
// insertAtTail(tail,40);
// Print(head);

    insertAtPosition(tail,head,1,0);
    Print(head);
    insertAtPosition(tail,head,2,5);
    Print(head);
    insertAtPosition(tail,head,4,30);
    Print(head);
    insertAtPosition(tail,head,4,20);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
   
    Delete(head,tail,1);
    Print(head);
    Delete(head,tail,3);
    Print(head);
    Delete(head,tail,3);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    
}
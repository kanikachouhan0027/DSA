#include<iostream>
#include<map>
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



void Print(Node* &head){
Node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;}

bool Detectcycle(Node* &head)
{if(head==NULL)
{
    return false;
}
    Node* temp=head;
    map<Node* ,bool>visited;
while(temp!=NULL && visited[temp]!=true)
{
    visited[temp]=true;
    temp=temp->next;

}
if(temp==NULL)
{
    return false;
}
cout<<temp->data<<endl;
return true;
}

bool floydCycleDetection(Node* &head)
{
if(head==NULL)
{
    return false;
}
    Node* slow=head;
    Node* fast=head;
    while(slow !=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast)
    {  cout<<slow->data<<endl;
        return true;
    }
    }
    
    return false;
}
Node* starting(Node* &head)
{
    if(head==NULL)
    {
        return NULL;
    }
    
}
int main(){
    Node* node=new Node(10);
    Node* head=node;
    Node* tail=node;
    
    insertAtPosition(tail,head,2,20);
    Print(head);
    insertAtPosition(tail,head,3,30);
    Print(head);
    insertAtPosition(tail,head,4,40);
    Print(head);
    insertAtPosition(tail,head,5,50);
    Print(head);
    Node* forward=tail;
    insertAtPosition(tail,head,6,70);
    Print(head);
    insertAtPosition(tail,head,7,80);
    Print(head);
    insertAtPosition(tail,head,8,90);
    Print(head);
    tail->next=forward;  
    cout<<Detectcycle(head)<<endl;
    cout<<floydCycleDetection(head)<<endl;
    

}
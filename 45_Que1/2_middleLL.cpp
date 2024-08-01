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
Node* Mid(Node* &head)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
      count++;
      temp=temp->next;
    }
    int i=1;
    temp=head;
    while(i<((count/2)+1))
    {
    temp=temp->next;
    i++;
    }
    return temp;
}

int Opti(Node* &head){
    Node* fast=head->next;
    Node* slow=head;
    while(fast!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
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
    insertAtPosition(tail,head,3,30);    
    insertAtPosition(tail,head,4,40);   
    insertAtPosition(tail,head,5,50);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    cout<<"middle element:"<<Mid(head)<<endl;;
    cout<<Opti(head)<<endl;
    

}
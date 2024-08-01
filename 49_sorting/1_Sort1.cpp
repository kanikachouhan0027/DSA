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

void Print(Node* &head){
Node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;}


int main(){
    Node* node=new Node(1);
    Node* head=node;
    Node* tail=node;
    Print(head);
    insertAtPosition(tail,head,2,0);
    Print(head);
    insertAtPosition(tail,head,3,2);
    Print(head);
    insertAtPosition(tail,head,4,1);
    Print(head);
    insertAtPosition(tail,head,5,2);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    int No_of_0s=0;
    int No_of_1s=0;
    int No_of_2s=0;
   Node* temp=head;
   while(temp!=NULL)
   {
    if(temp->data==0)
    {
        No_of_0s++;
    }
    else if(temp->data==1)
    {
        No_of_1s++;
    }
    else
    {
        No_of_2s++;
    }
    temp=temp->next;
   }
   temp=head;
   while(temp!=NULL)
   {
    if(No_of_0s!=0)
    {  temp->data=0;
        No_of_0s--;
    }
    else if(No_of_1s!=0)
    {   temp->data=1;
        No_of_1s--;
    }
    else{
        temp->data=2;
        No_of_2s--; 
    }
    temp=temp->next;
   }
 Print(head);
    
}
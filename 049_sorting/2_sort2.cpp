
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
//insert at tail for separate lists for 0s,1s,2s
void insertAttail(Node* &tail,Node* &head,int val)
{
    if(tail==NULL)
    {   Node* temp=new Node(val);
        head=temp;
        tail=temp;
        return;
    }
Node* temp=new Node(val);
tail->next=temp;
tail=temp;
}

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
    
Node* ZeroHead=NULL;
Node* ZeroTail=ZeroHead;       
Node* OneHead=NULL;
Node* OneTail=OneHead;
Node* TwoHead=NULL;
Node* TwoTail=TwoHead;
Node* curr=head;
while(curr!=NULL)
{
    if(curr->data==0)
    {   
        insertAttail(ZeroTail,ZeroHead,0);

    }
    else if(curr->data==1)
    {
        insertAttail(OneTail,OneHead,1);
    }
    else
    {
        insertAttail(TwoTail,TwoHead,2);
    }
    curr=curr->next;
}
//merging the list
//non-empty
if(OneHead!=NULL)
{
ZeroTail->next=OneHead;
OneTail->next=TwoHead;
}
//empty
else
{
ZeroTail->next=TwoHead;    
}

TwoTail->next=NULL;
//set up head
head=ZeroHead;
Print(head);
}

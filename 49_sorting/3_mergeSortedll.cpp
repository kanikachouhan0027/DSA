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
    Node* node1=new Node(1);
    Node* head1=node1;
    Node* tail1=node1;
    Print(head1);
    insertAtPosition(tail1,head1,2,2);
    Print(head1);
    insertAtPosition(tail1,head1,3,3);
    Print(head1);
    cout<<"head "<<head1->data<<endl;
    cout<<"tail "<<tail1->data<<endl;

    Node* node2=new Node(4);
    Node* head2=node2;
    Node* tail2=node2;
    Print(head2);
    insertAtPosition(tail2,head2,2,5);
    Print(head2);
    insertAtPosition(tail2,head2,3,6);
    Print(head2);
    cout<<"head "<<head2->data<<endl;
    cout<<"tail "<<tail2->data<<endl;
    Node* prev=NULL;
    Node* curr=head1;
    Node* temp=head2;
while(curr!=NULL)
{   if(head1->next==NULL)
{
    if(head2->data<=head1->data)
    {
        head2->next=head1;
        head1=head2;
        curr=NULL;
        temp=NULL;
    }
    else{
        head1->next=head2;
        curr=NULL;
        temp=NULL;
    }
}
   else if(prev==NULL)
    {   if(temp==NULL)
    {
        break;
    }
       else if(temp->data<=curr->data)
        {   Node* forward=temp->next;
            temp->next=head1;
            head1=temp;
            prev=temp;
            temp=forward;
        }
        else
        {
            prev=curr;
            curr=curr->next;
        }
    }
if(temp==NULL)
{
    break;
}
else if(temp->data>=prev->data && temp->data<=curr->data )
{   Node* forward=temp->next;
    prev->next=temp;
    temp->next=curr;
    prev=temp;
    temp=forward; 
    if(temp==NULL)
{
    break;
}
}

else{

prev=curr;
curr=curr->next;
}
}
if(temp!=NULL)
{
    tail1->next=temp;
}
Print(head1);
} 
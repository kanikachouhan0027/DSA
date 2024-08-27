#include<iostream>
#include<vector>
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

Node* Mid(Node* &head)

{   
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}

Node* reverse(Node* &head)
{
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL)
    {
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
int main(){
    Node* node=new Node(1);
    Node* head=node;
    Node* tail=node;
    Print(head);

    insertAtPosition(tail,head,2,2);
    Print(head);
    insertAtPosition(tail,head,3,2);
    Print(head);
    insertAtPosition(tail,head,4,1);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
        if(head==NULL || head->next==NULL)
    {
        cout<< "a pallindrome";
    }
    Node* middle=Mid(head);
    Node* temp=middle->next;
    Node* head2=reverse(temp);
    Node* head1=head;
    middle->next=head2; 
    int count=0;
    while(head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            cout<<"not a pallindrome"<<endl;
            count=1;
            break;           
        }
        head1=head1->next;
        head2=head2->next;
    }  
    middle->next=reverse(middle->next);
    if(!count)
    {
        cout<<"a pallindrome"<<endl;
    }
    Print(head);
}
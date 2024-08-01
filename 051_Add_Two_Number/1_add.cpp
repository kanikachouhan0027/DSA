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
Node* Reverse(Node* &head)
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
int getlen(Node* &head)
{
    if(head==0)
    {
        return 0;
    }
    int count=0;
    Node* temp=0;
    while(temp!=NULL)
    {  
        count++;
        temp=temp->next;
    }
}
bool isnull(Node* &head)
{
    Node* temp=head;
    int count=0;
    //count the number of zeroes
    while(temp!=NULL)
    {
        if(temp->data==0)
        {count++;}
        temp=temp->next;
    }
    if (count==getlen(head))
    {
        return true;
    }
    return false;
}
void Print(Node* &head){
Node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;}
Node* solve(Node* &head1,Node* &head2)
{  Node*  revTail1=head1;
  Node*   revHead1=Reverse(head1);
  Node*   revHead2=Reverse(head2);


  Node* temp1=revHead1;
  Node* temp2=revHead2;
  int carry=0;
  int unit=0;
  while(temp1!=NULL || temp2!=NULL )
  {int val1=0;
  int val2=0;
    if(temp1!=NULL)
    {
        val1=temp1->data;
    }
    if(temp2!=NULL)
    {
         val2=temp2->data;
    }
    int sum=val1+val2+carry;
    unit=sum%10;
    carry=sum/10;
    temp1->data=unit;
    if(temp1->next==NULL && carry!=0)
    {
        Node* node=new Node(carry);
        revTail1->next=node;
    }
    temp1=temp1->next;
    temp2=temp2->next;
  }
 Node* ans= Reverse(revHead1);
 Node* temp=ans;
 while(temp->data==0)
 {
    temp=temp->next;
 }
 return temp;
}

Node* addtwoll(Node* &head1,Node* &head2)
{
    if(isnull(head1) && isnull(head2))
    {
        return  head1;
    }
    else if(isnull(head1))
    {
        return head2;
    }
    else{
        return head1;
    }

    int len1=getlen(head1);
    int len2=getlen(head2);

    if(len1>=len2)
    {
        return solve(head1,head2);
    }
    else{
        return solve(head2,head1);
    }
}

int main(){
    Node* node1=new Node(4);
    Node* head1=node1;
    Node* tail1=node1;
    Print(head1);
    insertAtPosition(tail1,head1,2,5);
    // Print(head1);
    // insertAtPosition(tail1,head1,3,5);
    // Print(head1);
    // insertAtPosition(tail1,head1,4,6);
    // Print(head1);
    // insertAtPosition(tail1,head1,5,7);
    // Print(head1);
    cout<<"head "<<head1->data<<endl;
    cout<<"tail "<<tail1->data<<endl;
    //2nd list
    Node* node2=new Node(3);
    Node* head2=node2;
    Node* tail2=node2;
    Print(head2);
    insertAtPosition(tail2,head2,2,4);
    Print(head2);
    insertAtPosition(tail2,head2,3,5);
    Print(head2);
    // insertAtPosition(tail2,head2,4,3);
    // Print(head2);
    // insertAtPosition(tail2,head2,5,0);
    // Print(head2);
    cout<<"head "<<head2->data<<endl;
    cout<<"tail "<<tail2->data<<endl;
   //check if null list
Node* ans=addtwoll(head1,head2);
Print(ans);
}
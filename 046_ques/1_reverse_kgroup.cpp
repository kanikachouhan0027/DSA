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

bool isCircular(Node* &head)
{ if(head==NULL)
{
    return true;
}
Node* temp=head->next;
 map<Node* ,bool> mp;
while(temp!=NULL && mp[temp]!=true)
   {mp[temp]=true;
    temp=temp->next;
    }
    if(mp[temp]==true)
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
   
  
}
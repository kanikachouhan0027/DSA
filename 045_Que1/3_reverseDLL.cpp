#include<iostream>
 using namespace std;
 class Node{
    public:
    int data;
    Node* prev;
    Node*next;
   Node(int data){
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
     }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for "<<value<<endl;
    }
 };

 void insertatHead(Node* &tail,Node* &head,int d){
   if(head==NULL){
    Node* temp=new Node(d);
    head=temp;
    tail=temp;
    
   }
   else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
   }
    
 }
void insertAtTail(Node* &tail,Node* &head,int d)
{
    if(tail==NULL){
    Node* temp=new Node(d);
    head=temp;
    tail=temp;
   
   }
   else{
        Node* temp=new Node(d);
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
   }
    
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d)
{
    if(position==1)
    {
        insertatHead(tail,head,d);
        return;
    }

    Node* temp=head;
    Node* NodetoInsert=new Node(d);
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
if(temp->next==NULL){
    insertAtTail(tail,head,d);
    return;
}
    NodetoInsert->next=temp->next;
    temp->next->prev=NodetoInsert;
    temp->next=NodetoInsert;
    NodetoInsert->prev=temp;

}
void reverse(Node* &head)
{
    Node* curr=head;
    while(curr)
}


void Print(Node* &head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node=new Node(10);
    Node* head=node;
    Node* tail=node;
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

    reverse(head);
    Print(head);
}
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

void Delete(Node* &head,Node* &tail,int position)
{
if(position==1)
{   Node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete  temp;
}
else
{
    Node* curr=head;
    Node* previous=curr;
    int cnt=1;
    while(cnt<position)
    {   previous=curr;
        curr=curr->next;
        cnt++;
    } 

    if(curr->next==NULL)
    {
        curr->prev=NULL;
        previous->next=NULL;
        tail=previous;
        delete curr;
    }
    else{

    previous->next=curr->next;
    curr->next->prev=previous;
    curr->prev=NULL;
    curr->next=NULL;
    delete curr;
}}
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
// insertatHead(head,20);
// insertatHead(head,30);
// insertatHead(head,40);
// Print(head);
// cout<<"head "<<head->data<<endl;
// cout<<"tail "<<tail->data<<endl;
// insertAtTail(tail,20);
// Print(head);
// insertAtTail(tail,30);
// Print(head);
// insertAtTail(tail,40);
// Print(head);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;
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
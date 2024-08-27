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

void insertAttail(Node* &tail,Node* &head,int val)
{
if(tail==NULL)
{
    Node* node=new Node(val);
    tail=node;
    head=node;
    return;
}
Node* node=new Node(val);
tail->next=node;
tail=node;
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
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }
    int start=0;
    int end=arr.size()-1;
    while(start<=end)
    {
        if(arr[start]!=arr[end])
        {
            cout<<"not a pallindrome";
            break;
        }
        start++;
        end--;
    }
    cout<<" a pallindrome"<<endl;
}
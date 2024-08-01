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
    insertAtPosition(tail,head,3,3);
    Print(head);
    insertAtPosition(tail,head,4,1);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    Node* temp=head;
    Node* revHead=NULL;
    Node* revTail=revHead;
    while(temp!=NULL)
    {
     insertAttail(revTail,revHead,temp->data);
     temp=temp->next;
    }
    Print(revHead);
    cout<<"head "<<revHead->data<<endl;
    cout<<"tail "<<revTail->data<<endl;
    Node* prev=NULL;
    Node* curr=revHead;
    while(curr!=NULL)
    {
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }   
    revTail=revHead;
    revHead=prev;
    Print(revHead);
    Node* temp1=head;
    Node* temp2=revHead;
    while(temp1!=NULL)
    {   cout<<temp1->data<<" ";
        cout<<temp2->data;
        if(temp1->data!=temp2->data)
        {
            cout<<"Not a Pallindrome"<<endl;
            break;
        }
        else{
        temp1=temp1->next;
        temp2=temp2->next;
        cout<<endl;}
    }
    cout<<"a Pallindrome"<<endl;
}
//for platform;
// Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

// Example 1:

// Input:
// N = 3
// value[] = {1,2,1}
// Output: 1
// Explanation: The given linked list is
// 1 2 1 , which is a palindrome and
// Hence, the output is 1.
// Example 2:

// Input:
// N = 4
// value[] = {1,2,3,4}
// Output: 0
// Explanation: The given linked list
// is 1 2 3 4 , which is not a palindrome
// and Hence, the output is 0.
// Your Task:
// The task is to complete the function isPalindrome() which takes head as reference as the only parameter and returns true or false if linked list is palindrome or not respectively.

// Expected Time Complexity: O(N)
// Expected Auxialliary Space Usage: O(1)  (ie, you should not use the recursive stack space as well)

// Constraints:
// 1 <= N <= 105


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
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
    bool isPalindrome(Node *head)
    {
    Node* temp=head;
    Node* revHead=NULL;
    Node* revTail=revHead;
    while(temp!=NULL)
    {
     insertAttail(revTail,revHead,temp->data);
     temp=temp->next;
    }
  
    Node* prev=NULL;
    Node* curr=revHead;
    while(curr!=NULL)
    {
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }   
    revTail=revHead;
    revHead=prev;
  
    Node* temp1=head;
    Node* temp2=revHead;
    while(temp1!=NULL)
    {  
        if(temp1->data!=temp2->data)
        {
           return 0;
        }
        else{
        temp1=temp1->next;
        temp2=temp2->next;
        }
    }
   return 1;
    }
};
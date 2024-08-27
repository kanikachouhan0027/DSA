#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};
void insert(Node* &tail,int element,int d)
{
    if(tail==NULL){
        Node* temp=new Node(d);
        temp->next=temp;
        tail=temp;
    }
    else{
Node* curr=tail;
Node* temp=new Node(d);
while(curr->data!=element)
{
    curr=curr->next;
}
temp->next=curr->next;
curr->next=temp;
    }

}
void Delete(Node* &tail,int value)
{
if(tail==NULL)
{
    cout<<"List is Empty,please check again";
    return;
}
else{
    Node* prev=tail;
    Node* curr=prev->next;
    while(curr->data!=value)
    {   prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    //1 node
    if(curr==prev)
    {
        tail=NULL;
    }
    if(tail==curr)
    {
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
}
}
void Print(Node* &tail)
{ if(tail==NULL)
{
    cout<<"Empty-List";
}
    Node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
}
int main(){
    Node* tail=NULL;
    insert(tail,5,3);
    Print(tail);
     insert(tail,3,5);
     Print(tail);
    // insert(tail,5,6);
    // Print(tail);
    // insert(tail,6,7);
    // Print(tail);
    // insert(tail,7,20);
    // Print(tail);
    Delete(tail,3);
    Print(tail);
    Delete(tail,5);
    Print(tail);
    // Delete(tail,5);
    // Print(tail);
    // Delete(tail,6);
    // Print(tail);
}
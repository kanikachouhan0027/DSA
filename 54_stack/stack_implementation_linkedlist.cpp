#include<iostream>
using namespace std;
class Node
{ public:
    int data;
    Node* next;
    Node(int element)
    {
        this->data=element;
        this->next=NULL;
    }
    ~Node()
    {
       
    }

};

class Stack
{
public:
Node* tail;
Node* head;
Stack()
{
   this->tail=NULL;
   this->head=NULL;
}
void push(int val)
{Node* node=new Node(val);
    if(!node)
    {
        cout<<"stack overflow"<<endl;
    }
   if(tail==NULL)
   {
    
    tail=node;
    head=node;
    return;
   }
  
   tail->next=node;
   tail=node;
}

void pop()
{
    if(tail==NULL)
    {
        cout<<"stack underflow"<<endl;
        return;
    }
   
    
Node* temp=head; 
if(temp==tail)
{Node* nodetodelete=tail;
delete nodetodelete;
head=tail=NULL;
return;
}
while(temp->next!=tail)
{
    temp=temp->next;
}
Node* nodetodelete=tail;
temp->next=NULL;
tail=temp;

delete nodetodelete;
    }


int peek()
{
    if(tail==NULL)
    {
        cout<<"stack underflow"<<endl;
        return -1;
    }
    return tail->data;
}
bool empty()
{
    if(tail==NULL)
    {
        return true;
    }
    return false;
}

};

int main()
{
    Stack st;
 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.empty())
    {
        cout<<"stack empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

}
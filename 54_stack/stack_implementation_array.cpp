#include<iostream>
using namespace std;

class Stack
{
//properties
public:
int top;
int* arr;
int size;
//behaviour
Stack(int size)
{  this->size=size;
    arr=new int[size];
    top=-1;
}
void push(int element)
{
    if(size-top>1)
    {
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
}

void pop()
{
    if(top>=0)
    {
        top--;
        return;
    }
    else
    {
        cout<<"stack underflow"<<endl;
    }
}

int peek()
{
    if(top>=0)
    {
        return arr[top];
    }
    else
    {
       cout<<"stack underflow"<<endl;
       return -1;
    }
}

bool empty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
};

int main()
{
    Stack st(3);
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.peek()<<endl;
    st.push(40);
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
if(st.empty())
  {
    cout<<"empty stack"<<endl;
  }
else
{
    cout<<"not empty"<<endl;
}

}
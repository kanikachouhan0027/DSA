#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"front is:"<<q.front()<<endl;
    cout<<"back is:"<<q.back()<<endl;
    q.pop();
    cout<<"the size is:"<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"Non-empty"<<endl;
    }
    q.pop();
    cout<<"the size is:"<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"Non-empty"<<endl;
    }
    q.pop();
    cout<<"the size is:"<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"Non-empty"<<endl;
    }
    

}
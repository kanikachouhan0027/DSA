#include<iostream>
#include<queue>
using namespace std;
class Node
{public:
int data ;
Node* left;
Node* right;
Node (int data )
{
    this->data=data;
    this->left=NULL;
    this->right=NULL;
}
};
void buildTreeLOT(Node* &root)
{   queue<Node*>q;
    int data;
    cout<<"enter the data for root: "<<endl;
    cin>>data;
    root=new Node(data);
     q.push(root);
  while(!q.empty())
  {  Node* temp=q.front();
     q.pop();
     int leftdata;
      cout<<"enter the data for left of : "<<temp->data<<endl;
      
      cin>>leftdata;
      if(leftdata!=-1)
      {
        temp->left=new Node(leftdata);
        q.push(temp->left);
      }
       int rightdata;
      cout<<"enter the data for right of : "<<temp->data<<endl;
     
      cin>>rightdata;
      if(rightdata!=-1)
      {
        temp->right=new Node(rightdata);
        q.push(temp->right);
      }
      
  }
   
}
void LevelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(temp==NULL)
        { //purana level complete
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
        
    }
}}
int main()
{
Node* root;
buildTreeLOT(root);
LevelOrderTraversal(root);
}
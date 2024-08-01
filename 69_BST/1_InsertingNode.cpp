#include<iostream>
#include<queue>
using namespace std;

class Node
{
   public:
   int data;
   Node* left;
   Node* right;
   Node(int d)
   {
    this->data=d;
    this->left=NULL;
    this->right=NULL;
   }

};

Node* insertToBST(Node* root,int data)
{
  //base case
  if(root==NULL)
  {
    root=new Node(data);
    return root;
  }

  if(data<root->data)
  {
    root->left=insertToBST(root->left,data);
  }

  else
  {
    root->right=insertToBST(root->right,data);  
  }
  return root;

}

void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insertToBST(root,data);
        cin>>data;
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

void InOrderTraversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}

void PreOrderTraversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);  
    PreOrderTraversal(root->right);
}

void PostOrderTraversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    PostOrderTraversal(root->left);  
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}


int main()
{
    Node* root=NULL;
    cout<<"Enter The Data To Be Inserted"<<endl;
    takeInput(root);
    cout<<"Printing The LOT"<<endl;
    LevelOrderTraversal(root);
    cout<<endl;
    cout<<"Printing The Inorder"<<endl;
    InOrderTraversal(root);
    cout<<endl;
    cout<<"Printing The Preorder"<<endl;
    PreOrderTraversal(root);
    cout<<endl;
    cout<<"Printing The Postorder"<<endl;
    PostOrderTraversal(root);


}
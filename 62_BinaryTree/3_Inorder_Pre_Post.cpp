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
Node* buildTree(Node* root)
{
    cout<<"enter the data : "<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1)
    {
        return NULL;
    }
    
    cout<<"what to insert in left of: "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"what to insert in right of :"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
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
Node* root;
root=buildTree(root);
cout<<"inorder: "<<endl;
InOrderTraversal(root);
cout<<endl<<"preorder: "<<endl;
PreOrderTraversal(root);
cout<<endl<<"postorder: "<<endl;
PostOrderTraversal(root);
}

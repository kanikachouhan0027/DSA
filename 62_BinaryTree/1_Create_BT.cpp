#include<iostream>
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
int main()
{
Node* root;
root=buildTree(root);
}
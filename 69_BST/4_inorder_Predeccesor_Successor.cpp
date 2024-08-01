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

void Find(Node* root,Node* &pre,Node* &suc,int key)
{
    if (root==NULL)
    {
        return;
    }
    if(root->data==key)
    {  if (root->left)
    {
         //inorder pred is the maximum value of left subtree
        Node* temp=root->left;
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        pre=temp;
    }
       if(root->right)
       {
            //inorder suc is the minimum value of right subtree
         Node* temp=root->right;
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        suc=temp;
        return;
       }

        
    }
        if(key<root->data)
        {
            //root can be the possible suc
            suc=root;
           Find(root->left,pre,suc, key);
        }
      else
      {
         pre=root;
         Find(root->right,pre,suc, key);
      }

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
    
    Node* pre=NULL;
    Node* suc=NULL;
    int key;
    cout<<"Enter Key:"<<endl;
    cin>>key;
    Find(root,pre,suc,key);
    if (pre != nullptr)
        cout << "Predecessor is " << pre->data << endl;
    else
        cout << "No Predecessor" << endl;

    if (suc != nullptr)
        cout << "Successor is " << suc->data << endl;
    else
        cout << "No Successor" << endl;
    

}
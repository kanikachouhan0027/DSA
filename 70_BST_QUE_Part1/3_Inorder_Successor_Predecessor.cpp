//  Predecessor And Successor In BST
// Easy
// 40/40
// Average time to solve is 10m
// Contributed by
// 119 upvotes
// Asked in companies
// Problem statement
// You have been given a binary search tree of integers with ‘N’ nodes. You are also given 'KEY' which represents data of a node of this tree.



// Your task is to return the predecessor and successor of the given node in the BST.



// Note:
// 1. The predecessor of a node in BST is that node that will be visited just before the given node in the inorder traversal of the tree. If the given node is visited first in the inorder traversal, then its predecessor is NULL.

// 2. The successor of a node in BST is that node that will be visited immediately after the given node in the inorder traversal of the tree. If the given node is visited last in the inorder traversal, then its successor is NULL.

// 3. The node for which predecessor and successor are to be found will always be present in the given tree.

// 4. A binary search tree (BST) is a binary tree data structure which has the following properties.
//      • The left subtree of a node contains only nodes with data less than the node’s data.
//      • The right subtree of a node contains only nodes with data greater than the node’s data.
//      • Both the left and right subtrees must also be binary search trees.


// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 15 10 20 8 12 16 25 -1 -1 -1 -1 -1 -1 -1 -1
// 10
// Sample output 1:
// 8 12
// Explanation of Sample output 1:
// The tree can be represented as follows:

// The inorder traversal of this tree will be 8 10 12 15 16 20 25.

// Since the node with data 8 is on the immediate left of the node with data 10 in the inorder traversal, the node with data 8 is the predecessor.

// Since the node with data 12 is on the immediate right of the node with data 10 in the inorder traversal, the node with data 12 is the successor.
// Sample Input 2:
// 10 5 -1 -1 -1
// 5
// Sample output 2:
// -1 10
// Constraint :
// 1 <= N <= 10^4
// 1 <= data <= 10^7


//sol-1-Recursive

//Recusrsive 
// void Find(TreeNode* root,TreeNode* &pre,TreeNode* &suc,int key)
// {
//     if (root==NULL)
//     {
//         return;
//     }
//     if(root->data==key)
//     {  if (root->left)
//     {
//          //inorder pred is the maximum value of left subtree
//         TreeNode* temp=root->left;
//         while(temp->right!=NULL)
//         {
//             temp=temp->right;
//         }
//         pre=temp;
//     }
//        if(root->right)
//        {
//             //inorder suc is the minimum value of right subtree
//          TreeNode* temp=root->right;
//         while(temp->left!=NULL)
//         {
//             temp=temp->left;
//         }
//         suc=temp;
        
       
//        }
//         return;
        
//     }
//         if(key<root->data)
//         {
//             //root can be the possible suc
//            suc=root;
//            Find(root->left,pre,suc, key);
//         }
//       else
//       {
//          pre=root;
//          Find(root->right,pre,suc, key);
//       }

//     }
// pair<int, int> predecessorSuccessor(TreeNode *root, int key)
// {
// pair<int,int> ans;
//  TreeNode* pre = NULL;
//  TreeNode* suc = NULL;

//  Find(root,pre,suc,key);
 
//  if(pre==NULL)
//  {
//      ans.first=-1;
//  }
//  else
//  {
//      ans.first=pre->data;
//  }
//  if(suc==NULL)
//  {
//      ans.second=-1;
//  }
//  else{
//      ans.second=suc->data;
//  }
 
 
//  return ans;
 
// }



//sol-2-iterative

// void Find(TreeNode* root,TreeNode* &pre,TreeNode* &suc,int key)
// {     if(root==NULL)
//     {
//         return;
//     }
      
//     TreeNode* curr=root;
      

//     //find node

//     while(curr!=NULL && curr->data!=key )
//     {
//         if(key<curr->data)
//         {   
//             suc=curr;
//             curr=curr->left;
//         }
//       else
//         {
//            pre=curr;
//            curr=curr->right;
//         }
//     }

//     if(curr==NULL)
//     {
//         return;
//     }

//     //found the node
//     if(curr->left)
//     {
//         TreeNode* temp=curr->left;
//         while(temp->right!=NULL)
//         {
//             temp=temp->right;
//         }
//         pre=temp;
//     }
    
//     if(curr->right)
//     {
//         TreeNode* temp=curr->right;
//         while(temp->left!=NULL)
//         {
//             temp=temp->left;
//         }
//         suc=temp;
//     }
   
// }
// pair<int, int> predecessorSuccessor(TreeNode *root, int key)
// {
// pair<int,int> ans;
//  TreeNode* pre = NULL;
//  TreeNode* suc = NULL;

//  Find(root,pre,suc,key);
 
//  if(pre==NULL)
//  {
//      ans.first=-1;
//  }
//  else
//  {
//      ans.first=pre->data;
//  }
//  if(suc==NULL)
//  {
//      ans.second=-1;
//  }
//  else{
//      ans.second=suc->data;
//  }
 
 
//  return ans;
 
// }



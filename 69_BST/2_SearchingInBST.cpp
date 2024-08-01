// Search In BST
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 73 upvotes
// Asked in companies
// Problem statement
// There is a Binary Search Tree (BST) consisting of ‘N’ nodes. Each node of this BST has some integer data.



// You are given the root node of this BST, and an integer ‘X’. Return true if there is a node in BST having data equal to ‘X’, otherwise return false.



// A binary search tree (BST) is a binary tree data structure that has the following properties:

// 1. The left subtree of a node contains only nodes with data less than the node’s data.

// 2. The right subtree of a node contains only nodes with data greater than the node’s data.

// 3. The left and right subtrees must also be binary search trees.
// Note:
// It is guaranteed that all nodes have distinct data.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 7 8
// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// Sample Output 1:
// False
// Explanation For Sample Input 1:
// There is no node having data 8. See the problem statement for the picture of this BST.
// Sample Input 2:
// 4 1
// 3 1 5 -1 2 -1 -1 -1 -1
// Sample Output 2:
// True
// Explanation For Sample Input 1:
// There is a left node, and it has data 1. Thus, we should print ‘True’. 
// Constraints:
// 1 <= N <= 10000
// 0 <= X <= 10^9
// 0 <= DATA <=10^9

// Where ‘N’ is the number of nodes in the BST, ‘X’ is a given integer and ‘DATA’ is the data contained in each node of BST.

// Time limit: 1 sec



// bool searchInBST(BinaryTreeNode<int> *root, int x) {

// {  if(root==NULL)
// {
//     return false;
// }

// if(root->data==x)
// {
//     return true;
// }

// if(x<root->data)
// { //left part
//     return SearchBST(root->left,x,found);
// }

// else
// { //right part
//      return SearchBST(root->right,x,found);
// }

// }

//2nd way--iterative
// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//   BinaryTreeNode<int> *temp=root;
// while(temp!=NULL)
//{
//     if(root->data==x)
//          {
//              return true;
//          }

//     if(x<root->data)
//         {    //left part
//              temp=temp->left;
//          }

//      else
//          {   //right part
//              temp=temp->right;
//          }
//}
//  return false;
// }
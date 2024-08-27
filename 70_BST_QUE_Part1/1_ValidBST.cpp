// Problem statement
// Given a binary tree with N number of nodes, check if that input tree is Partial BST (Binary Search Tree) or not. If yes, return true, return false otherwise.

// A binary search tree (BST) is said to be a Partial BST if it follows the following properties.

// • The left subtree of a node contains only nodes with data less than and equal to the node’s data.
// • The right subtree of a node contains only nodes with data greater than and equal to the node’s data.
// • Both the left and right subtrees must also be partial binary search trees.

//Tc--o(n)
//sc-o(h) -->skew tree=o(n)

//sol
// bool checkForBST(BinaryTreeNode<int> *root,int min,int max)
// {
//     if(root==NULL)
//     {
//         return true;
//     }
//     if(root->data>=min && root->data<=max)
//     {
//         bool Left=checkForBST(root->left,min,root->data);
//         bool Right=checkForBST(root->right,root->data,max);
//         return Left && Right; 
//     }

//     else
//     {
//         return false;
//     }
// }




// bool validateBST(BinaryTreeNode<int> *root) {
//     return checkForBST(root,INT_MIN,INT_MAX);

// }
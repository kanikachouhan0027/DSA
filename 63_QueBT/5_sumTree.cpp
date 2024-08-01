//problem statement
// Sum Tree
// Difficulty: MediumAccuracy: 37.17%Submissions: 226K+Points: 4
// Given a Binary Tree. Return true if, for every node X in the tree other than the leaves, its value is equal to the sum of its left subtree's value and its right subtree's value. Else return false.

// An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.


// Example 1:

// Input:
//     3
//   /   \    
//  1     2

// Output: 1
// Explanation:
// The sum of left subtree and right subtree is
// 1 + 2 = 3, which is the value of the root node.
// Therefore,the given binary tree is a sum tree.
// Example 2:

// Input:

//           10
//         /    \
//       20      30
//     /   \ 
//    10    10

// Output: 0
// Explanation:
// The given tree is not a sum tree.
// For the root node, sum of elements
// in left subtree is 40 and sum of elements
// in right subtree is 30. Root element = 10
// which is not equal to 30+40.


//sol
// class Solution
// {
//     public:
//     pair<bool,int> Sum(Node* root)
//     {
//         if(root==NULL)
//         {
//             pair<bool,int> p=make_pair(true,0);
//             return p;
//         }
//         if(root->left==NULL && root->right==NULL)
//         {
//             pair<bool,int> p=make_pair(true,root->data);
//             return p;
//         }
        
        
//       pair<bool,int> left=Sum(root->left);
//       pair<bool,int> right=Sum(root->right);
//       bool val=left.second+right.second==root->data;
       
//        pair<bool,int> ans;
//       if(left.first && right.first && val)
//       {
//           ans.first=true;
//       }
//       else
//       {
//           ans.first=false;
//       }
      
//       ans.second=left.second+right.second+root->data;
//       return ans;
      
//     }
//     bool isSumTree(Node* root)
//     {
//          // Your code here
//          return Sum(root).first;
 //     }};
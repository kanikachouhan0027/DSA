// Tree Boundary Traversal
// Difficulty: MediumAccuracy: 23.33%Submissions: 369K+Points: 4
// Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order: 

// Left boundary nodes: defined as the path from the root to the left-most node ie- the leaf node you could reach when you always travel preferring the left subtree over the right subtree. 
// Leaf nodes: All the leaf nodes except for the ones that are part of left or right boundary.
// Reverse right boundary nodes: defined as the path from the right-most node to the root. The right-most node is the leaf node you could reach when you always travel preferring the right subtree over the left subtree. Exclude the root from this as it was already included in the traversal of left boundary nodes.
// Note: If the root doesn't have a left subtree or right subtree, then the root itself is the left or right boundary. 

// Example 1:

// Input:
//         1 
//       /   \
//      2     3  
//     / \   / \ 
//    4   5 6   7
//       / \
//      8   9
   
// Output: 1 2 4 8 9 6 7 3


// Example 2:

// Input:
//             1
//            /
//           2
//         /  \
//        4    9
//      /  \    \
//     6    5    3
//              /  \
//             7     8

// Output: 1 2 4 6 5 7 8
// As you can see we have not taken the right subtree.

//sol
// class Solution {
// public:

//     void TraversalLeft(Node* root,vector<int> &ans)
//     {   //base case 
//         if((root==NULL) || (root->left==NULL && root->right==NULL))
//         {
//             return;
//         }
        
//         ans.push_back(root->data);
        
//         //if left part exists
//         if(root->left)
//         {
//             TraversalLeft(root->left,ans);
//         }
        
//         else
//         {
//             TraversalLeft(root->right,ans);
//         }
        
//     }

//     void TraversalLeaf(Node* root,vector<int> &ans)
//     {  //just like inroder traversal
//         //base case
//         if(root==NULL)
//         {
//             return;
//         }
        
        
//         TraversalLeaf(root->left,ans);
    
//         if(root->left==NULL && root->right==NULL)
//         {
//             ans.push_back(root->data);
            
//         }
//         TraversalLeaf(root->right,ans);
        
//     }
    
    

//     void TraversalRight(Node* root,vector<int> &ans)
//     {
//         //base case
//         if((root==NULL) || (root->left==NULL && root->right==NULL))
//             {
//                 return;
//             }
            
//         if(root->right)
//         {
//             TraversalRight(root->right,ans);
            
//         }
        
//         else
//         {
//              TraversalRight(root->left,ans);
//         }
//         //print when returned
        
//         ans.push_back(root->data);
        
//     }
//     vector <int> boundary(Node *root)
//     {
//          vector<int> ans;
//          if(root==NULL)
//          {
//              return ans;
//          }
         
//          ans.push_back(root->data);
         
//          //left part traversal
         
//          TraversalLeft(root->left,ans);
         
//          //Leaf Node Traversal
         
//          //left subtree's Leaf Nodes Traversal
         
//          TraversalLeaf(root->left,ans);
         
//          //Right Part's Leaf Node Traversal
         
//          TraversalLeaf(root->right,ans);
         
//          //Right Part Traversal
//          TraversalRight(root->right,ans);
         
//          return ans;
//     }
// };
// Is Binary Tree Heap
// Difficulty: MediumAccuracy: 34.41%Submissions: 103K+Points: 4
// Given a binary tree. The task is to check whether the given tree follows the max heap property or not.
// Note: Properties of a tree to be a max heap - Completeness and Value of node greater than or equal to its child.

// Example 1:

// Input:
//       5
//     /  \
//    2    3
// Output: 1
// Explanation: The given tree follows max-heap property since 5,
// is root and it is greater than both its children.

// Example 2:

// Input:
//        10
//      /   \
//     20   30 
//   /   \
//  40   60
// Output: 0

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function isHeap() which takes the root of Binary Tree as parameter returns True if the given binary tree is a heap else returns False.

// Expected Time Complexity: O(N)
// Expected Space Complexity: O(N)

// Constraints:
// 1 ≤ Number of nodes ≤ 100
// 1 ≤ Data of a node ≤ 1000

//sol


//  bool isCBT(struct Node* root,int i,int n)
//   {
//       if(root==NULL)
//       {
//           return true;
//       }
      
//       if(i>=n)
//       {
//         return false;   
//       }
      
//       else
//       {
//           bool left=isCBT(root->left,2*i+1,n);
//           bool right=isCBT(root->right,2*i+2,n);
          
//           return left && right;
//       }
//   }
  
//   bool isMaxHeapOrder(struct Node* root)
//   {
//       //leaf node or null node is a heap
//       if(root==NULL || (root->left==NULL && root->right==NULL))
//       {
//           return true;
//       }
      
//       //only left child exist
//       if(root->right==NULL)
//       {
//         return  root->data > root->left->data;
//       }
      
//      //both childs
     
//     else
//      {
//         bool left=isMaxHeapOrder(root->left);
//         bool right=isMaxHeapOrder(root->right);
        
//         return (root->data > root->left->data && root->data >root->right->data && left && right);
      
//      }
     
//   }
  
//   int totalNodes(struct Node* root)
//   {
//      if(root==NULL)
//      {
//          return 0;
//      }
     
//     return 1 + totalNodes(root->left) + totalNodes(root->right);
//   }
  
 
//     bool isHeap(struct Node* tree) {
        
//       int count= totalNodes(tree);
     
//       int index=0;
      
//       if(isCBT(tree,index,count) && isMaxHeapOrder(tree))
//       {
//         return true;  
//       }
//       else
//       {
//           return false;
//       }
//     }
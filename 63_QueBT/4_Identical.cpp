//Problem-Statement
// Given two binary trees, the task is to find if both of them are identical or not.
// Note: You need to return true or false, the printing is done by the driver code.

// Example 1:

// Input:
//      1          1
//    /   \      /   \
//   2     3    2     3
// Output: 
// Yes
// Explanation: 
// There are two trees both having 3 nodes and 2 edges, both trees are identical having the root as 1, left child of 1 is 2 and right child of 1 is 3.
// Example 2:

// Input:
//     1       1
//   /  \     /  \
//  2    3   3    2
// Output: 
// No
// Explanation: There are two trees both having 3 nodes and 2 edges, but both trees are not identical.

//sol

// class Solution
// {
//     public:
//     //Function to check if two trees are identical.
//     bool isIdentical(Node *r1, Node *r2)
//     {
//         //Your Code here
//         if(r1==NULL && r2==NULL)
//         {
//             return true;
//         }
//       if(r1==NULL && r2!=NULL)
//       {
//           return false;
//       }
//       if(r1!=NULL && r2==NULL)
//       {
//           return false;
//       }
       
     
//     bool left=isIdentical(r1->left,r2->left);
//     bool right= isIdentical(r1->right,r2->right);
//     bool value=r1->data==r2->data;
    
//     if(left && right && value)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
    
//     }
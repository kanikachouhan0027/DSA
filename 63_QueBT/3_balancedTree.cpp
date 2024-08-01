//problem statement

// Balanced Tree Check
// Difficulty: EasyAccuracy: 43.15%Submissions: 305K+Points: 2
// Given a binary tree, find if it is height balanced or not.  A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 

// Examples:

// Input:
//       1
//     /
//    2
//     \
//      3 
// Output: 0
// Explanation: The max difference in height of left subtree and right subtree is 2, which is greater than 1. Hence unbalanced
// Input:
//        10
//      /   \
//     20   30 
//   /   \
//  40   60
// Output: 1
// Explanation: The max difference in height of left subtree and right subtree is 1. Hence balanced. 
// Constraints:
// 1 <= Number of nodes <= 105
// 1 <= Data of a node <= 109

// Expected time complexity: O(N)
// Expected auxiliary space: O(h) , where h = height of tree

//solution--1
//Tc-O(n^2)

// class Solution{
//     private:
//     int height(struct Node* node){
//         // code here 
//         if(!node)
//         {
//             return 0;
//         }
//        int left=height(node->left);
//        int right=height(node->right);
//        int ans=max(left,right)+1;
//        return ans;
//     }
//     public:
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
//     {
//         //  Your Code here
//         if(root==NULL)
//         {
//             return true;
//         }
//         bool left=isBalanced(root->left);
//         bool right=isBalanced(root->right);
//         bool diff=(height(root->left)-height(root->right))<=1;
        
//         if(left && right && diff)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };


//solution--2
//Tc-O(n)

// class Solution{
//     private:
//     pair<bool,int> FastBalanced(Node* root)
//     {
//         if(root==NULL)
//         {
//             pair <bool,int> p=make_pair(true,0);
//             return p;
//         }
        
//         pair<bool,int> left=FastBalanced(root->left);
//         pair<bool,int> right=FastBalanced(root->right);
         
        
//         bool diff= abs(left.second - right.second)<=1;
        
//         pair<bool,int> ans;
//         if(left.first && right.first && diff)
//         {
//             ans.first=true;
            
//         }
//         else
//         {
//             ans.first=false;
//         }
//         ans.second=max(left.second,right.second)+1;
//         return ans;
        
//     }
//     int height(struct Node* node){
//         // code here 
//         if(!node)
//         {
//             return 0;
//         }
//        int left=height(node->left);
//        int right=height(node->right);
//        int ans=max(left,right)+1;
//        return ans;
//     }
//     public:
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
//     {
//         //  Your Code here
//        return FastBalanced(root).first;
//     }
// };
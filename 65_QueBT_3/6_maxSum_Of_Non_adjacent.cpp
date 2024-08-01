// Maximum sum of Non-adjacent nodes
// Difficulty: MediumAccuracy: 55.35%Submissions: 65K+Points: 4
// Given a binary tree with a value associated with each node, we need to choose a subset of these nodes such that sum of chosen nodes is maximum under a constraint that no two chosen node in subset should be directly connected that is, if we have taken a node in our sum then we can’t take its any children or parents in consideration and vice versa.
                                             

// Example 1:

// Input:
//      11
//     /  \
//    1    2
// Output: 11
// Explanation: The maximum sum is sum of
// node 11.
// Example 2:

// Input:
//         1
//       /   \
//      2     3
//     /     /  \
//    4     5    6
// Output: 16
// Explanation: The maximum sum is sum of
// nodes 1 4 5 6 , i.e 16. These nodes are
// non adjacent.
// Your Task:
// You don't need to read input or print anything. You just have to complete function getMaxSum() which accepts root node of the tree as parameter and returns the maximum sum as described.

// Expected Time Complexity: O(Number of nodes in the tree).
// Expected Auxiliary Space: O(Height of the Tree).



// class Solution{
//   public:
//     //Function to return the maximum sum of non-adjacent nodes.
//     pair<int,int> MaxSum(Node* root)
//     {
//         if(root==NULL)
//         {
//             pair<int,int> p =make_pair(0,0);
//             return p;
//         }
        
        
//         pair<int,int> Left=MaxSum(root->left);
//         pair<int,int> Right=MaxSum(root->right);
        
//         pair<int,int> ans;
//         ans.first= root->data+Left.second+Right.second;//first includes the node
//         ans.second=max(Left.first,Left.second)+max(Right.first,Right.second);//second excludes the node
//         return ans;
//     }
//     int getMaxSum(Node *root) 
//     {
//         // Add your code here
//         pair<int,int> ans=MaxSum(root);
//        int result=max(ans.first,ans.second);
//        return result;
        
//     }
// };
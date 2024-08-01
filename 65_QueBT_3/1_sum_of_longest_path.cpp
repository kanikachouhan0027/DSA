// Sum of nodes on the longest path from root to leaf node
// Difficulty: MediumAccuracy: 52.39%Submissions: 104K+Points: 4
// Given a binary tree having n nodes. Find the sum of all nodes on the longest path from root to any leaf node. If two or more paths compete for the longest path, then the path having maximum sum of nodes will be considered.

// Example 1:

// Input: 
//          4        
//        /   \       
//       2     5      
//      / \   / \     
//     7   1 2   3    
//        /
//       6
// Output: 
// 13
// Explanation:
//          4        
//        /   \       
//       2     5      
//      / \   / \     
//     7   1 2   3  
//        /
//       6
// The highlighted nodes (4, 2, 1, 6) above are part of the longest root to leaf path having sum = (4 + 2 + 1 + 6) = 13
// Example 2:

// Input: 
//           1
//         /   \
//        2     3
//       / \   / \
//      4   5 6   7
// Output: 
// 11
// Explanation:
// Use path 1->3->7, with sum 11.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function sumOfLongRootToLeafPath() which takes root node of the tree as input parameter and returns an integer denoting the sum of the longest root to leaf path of the tree.

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

//gfg

// class Solution
// {
// public:
//   void solve(Node* root,int len,int &maxlen,int sum,int &maxsum)
//    {
//        if(root==NULL)
//        {
//            if(len>maxlen)
//            {
//                maxlen=max(len,maxlen);
               
//                maxsum=sum;
//            }
           
//            if(len==maxlen)
//            {
//                maxlen=len;
               
//                maxsum=max(sum,maxsum);
//            }
//            return;
//        }
      
//       sum=sum+root->data;
      
//       solve(root->left,len+1,maxlen,sum,maxsum);
//       solve(root->right,len+1,maxlen,sum,maxsum);
       
       
      
       
//    }
   
   
//     int sumOfLongRootToLeafPath(Node *root)
//     {
//      int len=0;
//      int maxlen=0;
     
//      int sum=0;
//      int maxsum=INT_MIN;
       
//        solve(root,len,maxlen,sum,maxsum);
//        return maxsum;
//     }
// };
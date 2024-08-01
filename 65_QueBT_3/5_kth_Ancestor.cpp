// Kth Ancestor in a Tree
// Difficulty: MediumAccuracy: 35.06%Submissions: 110K+Points: 4
// Given a binary tree of size  N, a node, and a positive integer k., Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. If there does not exist any such ancestor then return -1.
// Note:
// 1. It is guaranteed that the node exists in the tree.
// 2. All the nodes of the tree have distinct values.

// Example 1:



// Input:
// K = 2 Node = 4
// Output: 1
// Explanation:
// Since, K is 2 and node is 4, so we
// first need to locate the node and
// look k times its ancestors.
// Here in this Case node 4 has 1 as his
// 2nd Ancestor aka the Root of the tree.
// Example 2:

// Input:
// k=1 
// node=3
//       1
//     /   \
//     2     3

// Output:
// 1
// Explanation:
// K=1 and node=3 ,Kth ancestor of node 3 is 1.
// Your Task:
// You are asked to complete the function kthAncestor() which accepts root of the tree, k and node as input parameters, and returns the kth ancestor of Node which contains node as its value.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 1<=N<=105
// 1<= K <= 100
// 1 <= Node.data <= N

//approach1
// bool solve(Node* root, vector<int>& path, int node) {
//     if (root == NULL) {
//         return false;
//     }
    
//     path.push_back(root->data);
    
//     if (root->data == node) {
//         return true;
//     }
    
//     if (solve(root->left, path, node) || solve(root->right, path, node)) {
//         return true;
//     }
    
//     path.pop_back();
//     return false;
// }

// int kthAncestor(Node* root, int k, int node) {
//     vector<int> path;
    
  
//     solve( root,  path, node);
//     int index = path.size() - k - 1;
//     if (index < 0 || index >= path.size() - 1) {
//         return -1;  // k is larger than the height of the node in the tree
//     }
    
//     return path[index];
// }

//approach 2;
// Node* solve(Node* root,int &k,int node)
// {
//     if(root==NULL)
//     {
//         return NULL;
//     }
//     if(root->data==node)
//     {
//         return root;
//     }
    
//     Node* leftans=solve(root->left,k,node);
//     Node* rightans=solve(root->right,k,node);
    
//     if(leftans!=NULL && rightans==NULL)
//     {
//         k--;
//         if(k<=0)
        
//          {// ans lock
//             k=INT_MAX;
        
//             return root;
//         }
//         return leftans;
        
//     }
//     if(leftans==NULL && rightans!=NULL)
//     {
//         k--;
        
//         if(k<=0)
        
//         {  // ans lock
//             k=INT_MAX;
//             return root;
//         }
        
//         return rightans;
        
//     }
//    return NULL;
    
// }


// int kthAncestor(Node *root, int k, int node)
// {
    
//     Node* ans=solve(root,k,node);
    
//     if(ans==NULL || ans->data==node)//iska mtlb hai ki k kabhi zero hua hi mahi hence ancestor don't exist
//     {
//         return -1;
//     }
//     else
//     {
//          return ans->data;
//     }
   
    
// }

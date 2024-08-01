// Left View of Binary Tree
// Difficulty: EasyAccuracy: 33.74%Submissions: 488K+Points: 2
// Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument. If no left view is possible, return an empty tree.

// Left view of following tree is 1 2 4 8.

//           1
//        /     \
//      2        3
//    /     \    /    \
//   4     5   6    7
//    \
//      8   

// Example 1:

// Input:
//    1
//  /  \
// 3    2
// Output: 1 3

// Example 2:

// Input:

// Output: 10 20 40
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 0 <= Number of nodes <= 100
// 0 <= Data of a node <= 1000

//approach--har ek level ka first Node store
//   void TraversalLeft(Node* root,vector<int> &ans,int lvl)
//     {   //base case 
//         if((root==NULL) )
//         {
//             return;
//         }
        
//        if(lvl==ans.size())
//        {
//            //level changed
//            ans.push_back(root->data);
//        }
//        //if left part exists
//        if(root->left)
//         {
//             TraversalLeft(root->left,ans,lvl+1);
//         }
        
//        if(root->right)
//         {
//             TraversalLeft(root->right,ans,lvl+1);
//         }
        
//     }
// vector<int> leftView(Node *root)
// {
//    // Your code here
//    vector<int> ans;
//    TraversalLeft(root,ans,0);
//    return ans;
   
// }
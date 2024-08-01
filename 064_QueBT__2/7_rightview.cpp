// Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from right side. Return the right view as a list. 

// Right view of following tree is 1 3 7 8.

//           1
//        /     \
//      2        3
//    /   \      /    \
//   4     5   6    7
//     \
//      8

// Examples :

// Input:
//        1
//     /    \
//    3      2
// Output: 1 2
// Input:
//      10
//     /   \
//   20     30
//  /   \
// 40  60 
// Output: 10 30 60
// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(Height of the Tree).

//sol

//the only diff is now we want right to left mai first node
//hence right vaali call left se pahele

// class Solution
// {
//     public:
//     //Function to return list containing elements of right view of binary tree.
    // void TraversalRight(Node* root,vector<int> &ans,int lvl)
    // {   //base case 
    //     if((root==NULL) )
    //     {
    //         return;
    //     }
        
    //    if(lvl==ans.size())
    //    {
    //        //just before the level changes
    //        ans.push_back(root->data);
    //    }
    //    //if left part exists
    //     if(root->right)
    //     {
    //         TraversalRight(root->right,ans,lvl+1);
    //     }
    //    if(root->left)
    //     {
    //         TraversalRight(root->left,ans,lvl+1);
    //     }
        
      
        
//     }
//     vector<int> rightView(Node *root)
//     {
//        // Your Code here
//    vector<int> ans;
//    TraversalRight(root,ans,0);
//    return ans;
        
//     }
// };

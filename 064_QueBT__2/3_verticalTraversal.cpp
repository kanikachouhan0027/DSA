//geekforgeeks--no sorting for particular level(i.e the order should be left to right whether 5 comes before(if 5 comes before the vector would be (8,5,6) and if 6 comes before the order would be (8,6,5)--for gfg) or 6 (no sorting)) like 
//for a hd=0 ,the node is in 0th level with value 8
//and for hd=0 2 val 6,5 in 2nd level therfore it would be {8,6,5} for geekforgeekque
//but for leetcode it should be {8,5,6}--sorting only for the same level values i.e for 6 and 5 only the sorting is done not for 8 since 8 is in different level

//gfg
//pb
// Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
// If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.

// Example 1:

// Input:
//            1
//          /   \
//        2       3
//      /   \   /   \
//    4      5 6      7
//               \      \
//                8      9           
// Output: 
// 4 2 1 5 6 3 8 7 9 
// Explanation:

// Example 2:

// Input:
//        1
//     /    \
//    2       3
//  /    \      \
// 4      5      6
// Output: 4 2 1 5 3 6
// Expected Time Complexity: O(N*log(N))
// Expected Auxiliary Space: O(N)

//sol
// class Solution
// {
//     public:
//     //Function to find the vertical order traversal of Binary Tree.
//     vector<int> verticalOrder(Node *root)
//     {
//        //int this qyue har level ka jo particular array hai vo sorted hona chahiye ex ek hd //=0 1st level pr and 2 with hd=0 3rd level pr to jo 3rd level vaala array banega vo sorted //hoga
//       map<int,map<int,vector<int>>>  Nodes;
//         //hd,(lvl,vector)
//       queue<pair<Node*,pair<int,int>>> q;
//       vector<int> result;
//      if(root==NULL)
//      {
//          return result;
//      }
//        q.push(make_pair(root,make_pair(0,0)));
        
//         while(!q.empty())
//         {
//             pair<Node*,pair<int,int>> frontNode=q.front();
//             q.pop();
//             Node* front=frontNode.first;
//             int hd=frontNode.second.first;
//             int lvl=frontNode.second.second;
            
//             Nodes[hd][lvl].push_back(front->data);
            
//             if(front->left)
//             {
//                  q.push(make_pair(front->left,make_pair(hd-1,lvl+1)));
//             }
//             if(front->right)
//             {
//                  q.push(make_pair(front->right,make_pair(hd+1,lvl+1)));
//             }
//         }
        
//         for(auto i:Nodes)//each pair of map
//         {   
//             for(auto j:i.second)//each lvl,vector pair--i.second
                
//             { 
             
//                 for(auto k:j.second)//k-- element of vector --j.second
//                 {
//                     result.push_back(k);
//                 }
//             }
          
//         }
//      return result;
//     }
// };


//leetcode

//pb
// Given the root of a binary tree, calculate the vertical order traversal of the binary tree.

// For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0).

// The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values.

// Return the vertical order traversal of the binary tree.


// Your input
// [3,1,4,0,2,2]
// Output
// [[0],[1],[3,2,2],[4]]

// Expected
// [[0],[1],[3,2,2],[4]]

// Your input
// [8,2,3,4,6,5]
// Expected
// [[0],[1],[8,5,6],[4]]

//sol

// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         //int this qyue har level ka jo particular array hai vo sorted hona chahiye ex ek hd //=0 1st level pr and 2 with hd=0 3rd level pr to jo 3rd level vaala array banega vo sorted //hoga
//       map<int,map<int,vector<int>>>  Nodes;
//         //hd,(lvl,vector)
//       queue<pair<TreeNode*,pair<int,int>>> q;
//       vector<vector<int>> result;
//      if(root==NULL)
//      {
//          return result;
//      }
//        q.push(make_pair(root,make_pair(0,0)));
        
//         while(!q.empty())
//         {
//             pair<TreeNode*,pair<int,int>> frontNode=q.front();
//             q.pop();
//             TreeNode* front=frontNode.first;
//             int hd=frontNode.second.first;
//             int lvl=frontNode.second.second;
            
//             Nodes[hd][lvl].push_back(front->val);
            
//             if(front->left)
//             {
//                  q.push(make_pair(front->left,make_pair(hd-1,lvl+1)));
//             }
//             if(front->right)
//             {
//                  q.push(make_pair(front->right,make_pair(hd+1,lvl+1)));
//             }
//         }
        
//         for(auto i:Nodes)//each pair of map
//         {   vector<int> ans;
//             for(auto j:i.second)//each lvl,vector pair--i.second
                
//             { sort(j.second.begin(),j.second.end());
             
//                 for(auto k:j.second)//k-- element of vector --j.second
//                 {
//                     ans.push_back(k);
//                 }
//             }
//             result.push_back(ans);
//         }
//      return result;
//     }
// };
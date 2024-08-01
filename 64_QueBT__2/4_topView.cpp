// pb
// Top View of Binary Tree
// Difficulty: MediumAccuracy: 38.43%Submissions: 306K+Points: 4
// Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree

//        1
//     /     \
//    2       3
//   /  \    /   \
// 4    5  6   7

// Top view will be: 4 2 1 3 7
// Note: Return nodes from leftmost node to rightmost node. Also if 2 nodes are outside the shadow of the tree and are at same position then consider the left ones only(i.e. leftmost). 
// For ex - 1 2 3 N 4 5 N 6 N 7 N 8 N 9 N N N N N will give 8 2 1 3 as answer. Here 8 and 9 are on the same position but 9 will get shadowed.

// Example 1:

// Input:
//       1
//    /    \
//   2      3
// Output: 2 1 3
// Example 2:

// Input:
//        10
//     /      \
//   20        30
//  /   \    /    \
// 40   60  90    100
// Output: 40 20 10 30 100
// Your Task:
// Since this is a function problem. You don't have to take input. Just complete the function topView() that takes root node as parameter and returns a list of nodes visible from the top view from left to right.

// Expected Time Complexity: O(NlogN)
// Expected Auxiliary Space: O(N).

//my approach -stroing the vertical order in vector of vector and storing only the first value of each subvector into the final ans
// class Solution
// {
//     public:
//     //Function to return a list of nodes visible from the top view 
//     //from left to right in Binary Tree.
 
//     vector<int> topView(Node *root)
//     {
//         //in this que har level ka jo particular array hai vo sorted hona chahiye ex ek hd //=0 1st level pr and 2 with hd=0 3rd level pr to jo 3rd level vaala array banega vo sorted //hoga
//       map<int,map<int,vector<int>>>  Nodes;
//         //hd,(lvl,vector)
//       queue<pair<Node*,pair<int,int>>> q;
//       vector<vector<int>> result;
//       vector<int>  ans;
//      if(root==NULL)
//      {
//          return ans;
//      }
//         q.push(make_pair(root,make_pair(0,0)));
        
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
//         {   vector<int> temp;
//             for(auto j:i.second)//each lvl,vector pair--i.second
                
//             { 
             
//                 for(auto k:j.second)//k-- element of vector --j.second
//                 {
//                     temp.push_back(k);
//                 }
//             }
//             result.push_back(temp);
//         }
        
//         for(auto i: result)
//         {
//             ans.push_back(i[0]);
//         }
//         return ans;
//     }

// };

//love bbar--just store only the pairing of hd and nodevalue that too if already a value is mapped to the hd then no other mapping would be done for that particular hd
// class Solution
// {
//     public:
//     //Function to return a list of nodes visible from the top view 
//     //from left to right in Binary Tree.
//     vector<int> topView(Node *root)
//     {
//       vector<int> ans;
//       if(root==NULL)
//       {
//           return ans;
//       }
//       map<int,int> topNode;
//       queue<pair<Node*,int>> q;
//       q.push(make_pair(root,0));
      
//       while(!q.empty())
//       {
//           pair<Node*,int> frontNode=q.front();
//           q.pop();
          
//           Node* front=frontNode.first;
//           int hd=frontNode.second;
          
//           //if the mapping already exist do not do anything
//           if(topNode.find(hd)==topNode.end())
//           {
//               topNode[hd]=front->data;
//           }
          
//           if(front->left)
//           {
//               q.push(make_pair(front->left,hd-1));
//           }
//           if(front->right)
//           {
//               q.push(make_pair(front->right,hd+1));
//           }
          
//       }
//       for(auto i:topNode)
//       {
//           ans.push_back(i.second);
//       }
//       return ans;
//     }

// };
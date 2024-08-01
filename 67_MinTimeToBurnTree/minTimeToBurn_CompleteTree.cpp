// Burning Tree
// Difficulty: HardAccuracy: 53.53%Submissions: 62K+Points: 8
// Given a binary tree and a node data called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. It is known that in 1 second all nodes connected to a given node get burned. That is its left child, right child, and parent.
// Note: The tree contains unique values.


// Examples : 

// Input:      
//           1
//         /   \
//       2      3
//     /  \      \
//    4    5      6
//        / \      \
//       7   8      9
//                    \
//                    10
// Target Node = 8
// Output: 7
// Explanation: If leaf with the value 
// 8 is set on fire. 
// After 1 sec: 5 is set on fire.
// After 2 sec: 2, 7 are set to fire.
// After 3 sec: 4, 1 are set to fire.
// After 4 sec: 3 is set to fire.
// After 5 sec: 6 is set to fire.
// After 6 sec: 9 is set to fire.
// After 7 sec: 10 is set to fire.
// It takes 7s to burn the complete tree.


// Input:      
//           1
//         /   \
//       2      3
//     /  \      \
//    4    5      7
//   /    / 
//  8    10
// Target Node = 10
// Output: 5

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(height of tree)



//sol

// class Solution {
//   public:
//   Node* CreateMapping(Node* root,map<Node*,Node*> &NodeToParent,int target)
//   {
//       Node* result=NULL;
//       queue<Node*> q;
      
//       q.push(root);
//       NodeToParent[root]=NULL;
//       while(!q.empty())
//       {
//           Node* front=q.front();
//           q.pop();
//           if(front->data==target)
//           {
//               result=front;
//           }
          
//           if(front->left)
//           {
//               NodeToParent[front->left]=front;
//               q.push(front->left);
//           }
          
//           if(front->right)
//           {
//               NodeToParent[front->right]=front;
//               q.push(front->right);
//           }
          
//       }
//       return result;
      
//   }
  
  
//   int burnTree(Node* root,map<Node*,bool> &visited,map<Node*,Node*> &NodeToParent)
  
//   {
//       int ans=0;
//       queue<Node*> q;
//       q.push(root);
//       visited[root]=1;
      
//       while(!q.empty())
//       {
//           int size=q.size();
          
//           bool flag=0; //to check if any addition happened
          
//           //burning the node's neighbouring nodes i.e children and parent
          
//           for(int i=0;i<size;i++)
//           {
//               Node* front=q.front();
//               q.pop();
              
              
//               //3 nodes to check 
              
//               //1st one is left child
//               if(front->left && !visited[front->left] )
//               {
//                   flag=1;
//                   q.push(front->left);
//                   visited[front->left]=1;
//               }
              
//               //2nd node is right child
//               if(front->right && !visited[front->right] )
//               {
//                   flag=1;
//                   q.push(front->right);
//                   visited[front->right]=1;
//               }
              
//               //3rd node is parent node
              
//               if(NodeToParent[front] && !visited[NodeToParent[front]])
//               {
//                   flag=1;
//                   q.push(NodeToParent[front]);
//                   visited[NodeToParent[front]]=1;
//               }
              
//           }
          
//           if(flag==1)
//           {
//               ans++;
//           }
          
          
//       }
//       return ans;
      
      
      
//   }
  
  
  
//     int minTime(Node* root, int target) 
//     {
//         //Step-I--Create Mapping of Node to Parent
//         //Step-II--find the node
//         //Step-III --burn the tree in min time
        
        
//         map<Node*,Node*> NodeToParent;
//         Node* Target=CreateMapping(root,NodeToParent,target);
        
        
//         map<Node*,bool> visited;
        
//         int ans=burnTree(Target,visited,NodeToParent);
//         return ans;
//     }
// };
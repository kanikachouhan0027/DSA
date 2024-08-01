//problem

// The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes. The diagram below shows two trees each with diameter nine, the leaves that form the ends of the longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes). 



// Example 1:

// Input:
//        1
//      /  \
//     2    3
// Output: 3
// Example 2:

// Input:
//          10
//         /   \
//       20    30
//     /   \ 
//    40   60
// Output: 4
// Your Task:
// You need to complete the function diameter() that takes root as parameter and returns the diameter.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(Height of the Tree).

// Constraints:
// 1 <= Number of nodes <= 10000
// 1 <= Data of a node <= 1000

//solution
//approach1-by babbar--Issue is TC is O(n^2) ,since height function is also getting called which is also of o(n)

// class Solution {
//   public:
//     // Function to return the diameter of a Binary Tree.
//       int height(struct Node* node){
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
    
//     int diameter(Node* root) {
//         // Your code here
//         if(!root)
//         {
//             return 0;
//         }
//         int opt1=diameter(root->left);
//         int opt2=diameter(root->right);
//         int opt3=height(root->left)+1+height(root->right);
//         int ans=max(opt1,max(opt2,opt3));
//         return ans;
//     }
// };

//approach2--by babbar --more optimised approach with TC of O(n)

// class Solution {
//   public:
//     // Function to return the diameter of a Binary Tree.
//     pair<int,int> fastdiameter(Node* root)
//     {
//         if(!root)
//         {
//             pair<int,int> p=make_pair(0,0);
//             return p;
//         }
        
//         pair <int,int> left=fastdiameter(root->left);
//         pair <int,int> right=fastdiameter(root->right);
        
//         int opt1=left.first;
//         int opt2=right.first;
//         int opt3=(left.second + right.second) + 1 ;
        
//          pair <int,int> ans;
//          ans.first=max(opt1,max(opt2,opt3));
//          ans.second=max(left.second,right.second)+1;
//          return ans;
//     }
    
//     int diameter(Node* root) {
//         // Your code here
//         return fastdiameter(root).first;
        
//     }
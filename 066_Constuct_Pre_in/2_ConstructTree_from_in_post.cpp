//  Binary Tree from Inorder and Postorder
// Difficulty: MediumAccuracy: 64.78%Submissions: 77K+Points: 4
// Given inorder and postorder traversals of a binary tree(having n nodes) in the arrays in[] and post[] respectively. The task is to construct a unique binary tree from these traversals.

// Driver code will print the preorder traversal of the constructed tree.

// Note:- The inorder and postorder traversals contain unique values, and every value present in the postorder traversal is also found in the inorder traversal.

// Examples:

// Input: n = 8, in[] = [4, 8, 2, 5, 1, 6, 3, 7], post[] = [8, 4, 5, 2, 6, 7, 3, 1]
// Output: 1 2 4 8 5 3 6 7
// Explanation: For the given postorder and inorder traversal of tree the  resultant binary tree will be
//           1
//        /      \
//      2        3
//    /  \      /  \
//   4   5    6   7
//    \
//     8
// Input: n = 5, in[] = [9, 5, 2, 3, 4], post[] = [5, 9, 3, 4, 2]
// Output: 2 9 5 4 3
// Explanation: The  resultant binary tree will be
//            2
//         /     \
//        9      4
//         \     /
//          5   3
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)


//sol--without map

// class Solution {
//   public:
//   int findPosition(int in[],int element,int n)
//     {
//         for(int i=0;i<n;i++)
//         {
//             if(in[i]==element)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
//     Node* solve(int in[],int post[],int &index,int inorderStart,int inorderEnd,int n)
//     {   
//         if(index<0 || inorderStart > inorderEnd)
//         {
//             return NULL;
//         }
        
//         int element = post[index--];// At every interation index is increasing
//         Node* root  = new Node(element);
//         int position=findPosition(in,element,n);
        
//         //recursive calls
//          root->right= solve(in,post,index,position+1,inorderEnd,n);
//         root->left=  solve(in,post,index,inorderStart,position-1,n);
       
        
//         return root;
//     }

//     // Function to return a tree created from postorder and inoreder traversals.
//     Node *buildTree(int n, int in[], int post[]) {
//         // Your code here
//          int postorderIndex=n-1;  //Pre order is NLR so First element is root .
//         Node* ans=solve(in,post,postorderIndex,0,n-1,n);
//         return ans;
//     }
// };


//sol--with map--since given that values are unique but taking more time

// class Solution {
//   public:
//   void CreateMapping(int in[],int n,map<int,int> map)
// {
//     for(int i=0;i<n;i++)
//     {
//         map[in[i]]=i;
//     }
// }
//     Node* solve(int in[],int post[],int &index,int inorderStart,int inorderEnd,int n,map<int,int> map)
//     {   
//         if(index<0 || inorderStart > inorderEnd)
//         {
//             return NULL;
//         }
        
//         int element = post[index--];// At every interation index is increasing
//         Node* root  = new Node(element);
//         int position=map[element];
        
//         //recursive calls
//          root->right= solve(in,post,index,position+1,inorderEnd,n);
//         root->left=  solve(in,post,index,inorderStart,position-1,n);
       
        
//         return root;
//     }

//     // Function to return a tree created from postorder and inoreder traversals.
//     Node *buildTree(int n, int in[], int post[]) {
//         map<int,int> map

//         creating map of nodes to index
//         CreateMapping(in,n,map);
//
//          int postorderIndex=n-1;  //Post order is LRN so Last element is root .
//         Node* ans=solve(in,post,postorderIndex,0,n-1,n,map);
//         return ans;
//     }
// };
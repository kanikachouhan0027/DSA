// Construct Tree from Inorder & Preorder
// Difficulty: MediumAccuracy: 34.59%Submissions: 170K+Points: 4
// Given 2 Arrays of Inorder and preorder traversal. The tree can contain duplicate elements. Construct a tree and print the Postorder traversal. 

// Example 1:

// Input:
// N = 4
// inorder[] = {1 6 8 7}
// preorder[] = {1 6 7 8}
// Output: 8 7 6 1
// Example 2:

// Input:
// N = 6
// inorder[] = {3 1 4 0 5 2}
// preorder[] = {0 1 3 4 2 5}
// Output: 3 4 1 5 2 0
// Explanation: The tree will look like
//        0
//     /     \
//    1       2
//  /   \    /
// 3    4   5
// Your Task:
// Your task is to complete the function buildTree() which takes 3 arguments(inorder traversal array, preorder traversal array, and size of tree n) and returns the root node to the tree constructed. You are not required to print anything and a new line is added automatically (The post order of the returned tree is printed by the driver's code.)

// Expected Time Complexity: O(N*N).
// Expected Auxiliary Space: O(N).


//sol

// class Solution{
//     public:
//     int findPosition(int in[],int inorderStart,int inorderEnd,int element)
//     {
//         for(int i=inorderStart;i<=inorderEnd;i++)
//         {
//             if(in[i]==element)
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }
//     Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n)
//     {   
//         if(index>=n || inorderStart > inorderEnd)
//         {
//             return NULL;
//         }
        
//         int element = pre[index++];// At every interation index is increasing
//         Node* root  = new Node(element);
//         int position=findPosition(in,inorderStart,inorderEnd, element);
        
//         //recursive calls
//         root->left=  solve(in,pre,index,inorderStart,position-1,n);
//         root->right= solve(in,pre,index,position+1,inorderEnd,n);
        
//         return root;
//     }
//     Node* buildTree(int in[],int pre[], int n)
//     {
//        int preorderIndex=0;  //Pre order is NLR so First element is root .
//        Node* ans=solve(in,pre,preorderIndex,0,n-1,n);
//        return ans;
//     }
// };
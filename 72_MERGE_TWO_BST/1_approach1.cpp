// Merge Two BSTs
// Moderate
// 80/80
// Average time to solve is 10m
// Contributed by
// 161 upvotes
// Asked in companies
// Problem statement
// You are given two binary search trees of integers having ‘N’ and ‘M’ nodes. Return an array that contains elements of both BST in sorted order.



// A binary search tree (BST) is a binary tree data structure with the following properties.

// • The left subtree of a node contains only nodes with data less than the node’s data.

// • The right subtree of a node contains only nodes with data greater than the node’s data.

// • Both the left and right subtrees must also be binary search trees.


// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 2 1 3 -1 -1 -1 -1
// 4 -1 -1
// Sample Output 1:
// 1 2 3 4 
// Explanation For Sample Output 1:
//  The given BST are:-


// The output will be 1 2 3 4
// Sample Input 2:
// 4 2 7 -1 3 -1 -1 -1 -1  
// 5 1 7 -1 -1 -1 -1
// Sample Output 2:
// 1 2 3 4 5 7 7 
// Constraints:
// 1 <= 'N', 'M' <= 10^5

// Time Limit: 1 sec

//sol-stroing inorder then mergeginf two sorted array then inorder to bst

/*************************************************************

    Following is the Binary Tree node structure:

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/
// void inorder(TreeNode *root,vector<int> &in)
// {
//   if(root==NULL)
//   {
//     return;
//   }

//   inorder(root->left,in);
//   in.push_back(root->data);
//   inorder(root->right,in);
// }

// vector<int> mergeArrays(vector<int> &a,vector<int> &b)
// {
//     vector<int> ans(a.size()+b.size());
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size() && j<b.size())
//     {
//       if(a[i]<b[j])
//       {
//         ans[k++]=a[i];
//         i++;
//       }
//       else
//       {
//         ans[k++]=b[j];
//         j++;  
//       }
      
//     }
//     while(i<a.size())
//     {
//       ans[k++]=a[i];
//       i++;
//     }
//      while(j<b.size())
//     {
//       ans[k++]=b[j];
//       j++;
//     }
    
//     return ans;

// }
// //to make Bst from sorted array

// TreeNode* inorderToBst(vector<int> &in,int s,int e)
// {
//     if(s>e)
//     {
//       return NULL;
//     }

//     int mid=(s+e)/2;

//     TreeNode* root=new TreeNode(in[mid]);

//     root->left=inorderToBst(in,s,mid-1);
//     root->right=inorderToBst(in,mid+1,e); 
//     return root; 
// }


// vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
// { vector<int> bst1;
//   vector<int> bst2;
//   //step 1. store inorder of both arrays
//   inorder(root1,bst1);
//   inorder(root2,bst2);

//   //step 2. Merge sorted arrays 
//   vector<int> mergeArray=mergeArrays(bst1,bst2);
//   return mergeArray;

//   //step 3. used MergeArray to build BST

//   // return inorderToBst(MergeArray,0,MergeArray.size()-1);
// }
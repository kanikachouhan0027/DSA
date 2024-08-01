//que

// Problem statement
// You are given a Binary tree. You have to count and return the number of leaf nodes present in it.

// A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child

// A node is a leaf node if both left and right child nodes of it are NULL.

//solution
//by inorder
/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
// void inorder(BinaryTreeNode<int> *root,int &count)
// { //base case                 inorder==>LNR
//     if(!root)
//     {
//         return;
//     }
//     //L
//     inorder(root->left,count);
//     //N
//     if(root->left==NULL && root->right==NULL)
//     {
//         count++;
//     }
//     //R
//     inorder(root->right,count);
// }
// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     // Write your code here.
//    int count=0;
//    inorder(root,count);

//     return count;
// }


//by levelOrderTraversal
// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     // Write your code here.
//     // If the tree is empty, there are no leaf nodes
//     if (!root) {
//         return 0;
//     }

//     int count = 0;
//     queue<BinaryTreeNode<int>*> q;
//     q.push(root);

//     while (!q.empty()) {
//         BinaryTreeNode<int>* temp = q.front();
//         q.pop();

//         // Check if the current node is a leaf node
//         if (!temp->left && !temp->right) {
//             count++;
//         }

//         // Add left child to the queue if it exists
//         if (temp->left) {
//             q.push(temp->left);
//         }

//         // Add right child to the queue if it exists
//         if (temp->right) {
//             q.push(temp->right);
//         }
//     }

//     return count;
// }



// Diagonal Traversal of Binary Tree
// Difficulty: MediumAccuracy: 60.63%Submissions: 83K+Points: 4
// Given a Binary Tree, print the diagonal traversal of the binary tree.

// Consider lines of slope -1 passing between nodes. Given a Binary Tree, print all diagonal elements in a binary tree belonging to same line.
// If the diagonal element are present in two different subtress then left subtree diagonal element should be taken first and then right subtree. 

// Example 1:

// Input :
//             8
//          /     \
//         3      10
//       /   \      \
//      1     6     14
//          /   \   /
//         4     7 13
// Output : 8 10 14 3 6 7 13 1 4
// Explanation:
// unnamed
// Diagonal Traversal of binary tree : 
//  8 10 14 3 6 7 13 1 4
// Your Task:
// You don't need to read input or print anything. The task is to complete the function diagonal() that takes the root node as input argumets and returns the diagonal traversal of the given tree.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).
// Here N is number of nodes.

//solution

// vector<int> diagonal(Node *root) {
//     // This map will store the nodes with the same diagonal distance.
//   vector<int> result;
//     if (root == NULL) {
//         return result;
//     }
    
//     // Queue to store nodes and their corresponding diagonal distances
//     queue<Node*> q;
//     q.push(root);
    
//     while (!q.empty()) {
//         Node* front = q.front();
//         q.pop();
        
//         // Process all nodes in the current diagonal
//         while (front) {
//             result.push_back(front->data);
            
//             // If there is a left child, it will be part of the next diagonal
//             if (front->left) {
//                 q.push(front->left);
//             }
            
//             // Move to the right child in the same diagonal
//             front = front->right;
//         }
//     }
    
//     return result;
// }



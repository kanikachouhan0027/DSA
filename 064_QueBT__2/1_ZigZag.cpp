//problem

// ZigZag Tree Traversal
// Difficulty: MediumAccuracy: 54.05%Submissions: 163K+Points: 4
// Given a binary tree with n nodes. Find the zig-zag level order traversal of the binary tree.
// In zig zag traversal starting from the first level go from left to right for odd-numbered levels and right to left for even-numbered levels.

// Example 1:

// Input:
//         1
//       /   \
//      2    3
//     / \    /   \
//    4   5 6   7
// Output:
// 1 3 2 4 5 6 7
// Explanation:
// For level 1 going left to right, we get traversal as {1}.
// For level 2 going right to left, we get traversal as {3,2}.
// For level 3 going left to right, we get traversal as {4,5,6,7}.
// Merging all this traversals in single array we get {1,3,2,4,5,6,7}

// Example 2:

// Input:
//            7
//         /     \
//        9      7
//      /  \      /   
//     8   8   6     
//    /  \
//   10  9 
// Output:
// 7 7 9 8 8 6 9 10 
// Explanation:
// For level 1 going left to right, we get traversal as {7}.
// For level 2 going right to left, we get traversal as {7,9}.
// For level 3 going left to right, we get traversal as {8,8,6}.
// For level 4 going right to left, we get traversal as {9,10}.
// Merging all this traversals in single array we get {7,7,9,8,8,6,9,10}.

//sol
// class Solution{
//     public:
//     //Function to store the zig zag order traversal of tree in a list.
    
//     vector <int> zigZagTraversal(Node* root)
//     {   
//     	// Code here
//     	vector<int> result;
//     	if(!root)
//     	{
//     	    return result;
//     	}
//     	queue<Node*> q;
//     	q.push(root);
//     	bool LeftToRight=true;
    	
//     	while(!q.empty())
//     	{
//     	    int size=q.size();
//     	    vector<int> ans(size);
//     	    //particular level
//     	    for(int i=0;i<size;i++)
//     	    {   Node* frontNode=q.front();
//     	        q.pop();
//     	        int index=LeftToRight?i:size-i-1;
//     	        ans[index]=frontNode->data;
    	        
//     	        if(frontNode->left)
//     	        {
//     	            q.push(frontNode->left);
    	            
//     	        }
//     	        if (frontNode->right)
//     	        {
//     	            q.push(frontNode->right);
//     	        }
    	        
//     	    }
//     	    LeftToRight=!LeftToRight;
    	    
//     	    for(auto i:ans)
//     	    {
//     	        result.push_back(i);
//     	    }
    	   
//     	 }
    	   
    	   
//     	   return result;
    	   
//     	}
    	    
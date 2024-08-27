//  Smallest Range Covering Elements from K Lists
// Hard

// 3477

// 75

// Add to List

// Share
// You have k lists of sorted integers in non-decreasing order. Find the smallest range that includes at least one number from each of the k lists.

// We define the range [a, b] is smaller than range [c, d] if b - a < d - c or a < c if b - a == d - c.

 

// Example 1:

// Input: nums = [[4,10,15,24,26],[0,9,12,20],[5,18,22,30]]
// Output: [20,24]
// Explanation: 
// List 1: [4, 10, 15, 24,26], 24 is in range [20,24].
// List 2: [0, 9, 12, 20], 20 is in range [20,24].
// List 3: [5, 18, 22, 30], 22 is in range [20,24].
// Example 2:

// Input: nums = [[1,2,3],[1,2,3],[1,2,3]]
// Output: [1,1]
 

// Constraints:

// nums.length == k
// 1 <= k <= 3500
// 1 <= nums[i].length <= 50
// -105 <= nums[i][j] <= 105
// nums[i] is sorted in non-decreasing order.

//approach1--traversing each element with other for range with atleast 1 element of each list
//sol

// class Node
// {
//     public:
//     int data;
//     int row;
//     int col;
//     Node(int data,int row,int col)
//     {
//         this->data=data;
//         this->row=row;
//         this->col=col;
//     }
// };

// class compare
// {  public:
//     bool operator()(Node* x,Node* y)
//     {
//         return x->data > y->data;
//     }
// };

// class Solution {
// public:
//     vector<int> smallestRange(vector<vector<int>>& nums) 
// {
//     //since n is same for all rows;
    
//     //no of list is the size of arrya
//     int k=nums.size();
        
        
//     priority_queue<Node*,vector<Node*>,compare> minHeap;

//     int mini=INT_MAX;
//     int maxi=INT_MIN;


//     //inserting 1st elements of all the list
//         for(int i=0;i<k;i++)
//         {
//             Node* temp=new Node(nums[i][0],i,0);
//             minHeap.push(temp);

//             maxi=max(maxi,temp->data);
//             mini=min(mini,temp->data);

//         }   

//     //recording the range 
//     int ansStart=mini;
//     int ansEnd=maxi;


//     while(!minHeap.empty())
//     {
//         Node* top=minHeap.top();
//         minHeap.pop();

//         mini=top->data;

//         //ans update
//         if(maxi-mini < ansEnd-ansStart)
//         {
//             ansStart=mini;
//             ansEnd=maxi;
//         }

//         int i = top->row;
//         int j = top->col;

//         //min increase
//         if(j+1<nums[i].size())
//         {
//             Node* next=new Node(nums[i][j+1],i,j+1);
//             minHeap.push(next);
//             maxi=max(maxi,next->data);
//         }
//         else
//         {
//             break;
//         }
//     }
//     vector<int> ans;
//         ans.push_back(ansStart);
//         ans.push_back(ansEnd);
//         return ans;
//     }
// };
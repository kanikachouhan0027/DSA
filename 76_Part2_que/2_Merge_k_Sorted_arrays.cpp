// Problem statement
// You have been given ‘K’ different arrays/lists, which are sorted individually (in ascending order). You need to merge all the given arrays/list such that the output array/list should be sorted in ascending order.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 5
// 1 <= K <= 5
// 1 <= N <= 20
// -10^5 <= DATA <= 10^5

// Time Limit: 1 sec 
// Sample Input 1:
// 1
// 2
// 3 
// 3 5 9 
// 4 
// 1 2 3 8   
// Sample Output 1:
// 1 2 3 3 5 8 9 
// Explanation of Sample Input 1:
// After merging the two given arrays/lists [3, 5, 9] and [ 1, 2, 3, 8], the output sorted array will be [1, 2, 3, 3, 5, 8, 9].
// Sample Input 2:
// 1
// 4
// 3
// 1 5 9
// 2
// 45 90
// 5
// 2 6 78 100 234
// 1
// 0
// Sample Output 2:
// 0 1 2 5 6 9 45 78 90 100 234
// Explanation of Sample Input 2 :
// After merging the given arrays/lists [1, 5, 9], [45, 90], [2, 6, 78, 100, 234] and [0], the output sorted array will be [0, 1, 2, 5, 6, 9, 45, 78, 90, 100, 234].



// //approach1--Tc--(n*k log(n*k)) 
// //create an array and insert all the n*k elements in this array then sort this
// //but here we didn't utilise the imp thing given i>e individually the arrays are sorted

// //approach 2--TC--o(n*k log(k)) and SC--o(n*k);

// class node
// { public:
//     int data;
//     int i;
//     int j;

//     node(int data,int row,int col)
//     {
//         this->data=data;
//         i=row;
//         j=col;
//     }
// };

// class compare
// { public:
//     bool operator()(node* a,node* b)
//     {
//         return a->data > b->data;
//     }
// };

// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
// {
//    priority_queue<node*,vector<node*>,compare> minHeap;

//    vector<int> ans;

//    //step 1:insert first elements of all the arrays into heap
//    for(int i=0;i<k;i++)
//    {
//        node* temp=new node(kArrays[i][0],i,0);
//        minHeap.push(temp);
//    }

//    //step 2: insert next element of array whose element is inserted in ans array
     
//     while(!minHeap.empty())
//     {
//         node* temp=minHeap.top();
//         minHeap.pop();
//         ans.push_back(temp->data);

//         int i=temp->i;
//         int j=temp->j;

//         if(j+1<kArrays[i].size())
//         {
//             node* next=new node(kArrays[i][j+1],i,j+1);
//             minHeap.push(next);
//         }
//     }
// return ans;
// }
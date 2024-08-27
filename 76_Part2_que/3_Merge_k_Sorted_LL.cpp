// You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

// Merge all the linked-lists into one sorted linked-list and return it.

 

// Example 1:

// Input: lists = [[1,4,5],[1,3,4],[2,6]]
// Output: [1,1,2,3,4,4,5,6]
// Explanation: The linked-lists are:
// [
//   1->4->5,
//   1->3->4,
//   2->6
// ]
// merging them into one sorted list:
// 1->1->2->3->4->4->5->6
// Example 2:

// Input: lists = []
// Output: []
// Example 3:

// Input: lists = [[]]
// Output: []
 

// Constraints:

// k == lists.length
// 0 <= k <= 104
// 0 <= lists[i].length <= 500
// -104 <= lists[i][j] <= 104
// lists[i] is sorted in ascending order.
// The sum of lists[i].length will not exceed 104.



// //approach1--Tc-->o(n*k log(n*k));Sc--o(n*k)
// //create an answer array and insert all first elements of all LL then 
// //sort it and join all the LL with each other then copy all the elements of answer array to this LL 

// //approach2-->using minHeap

// class compare
// {
//   public:
//     bool operator()(ListNode* a, ListNode* b)
//     {
//         return a->val > b->val;
//     }
    
// };


// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
       
//     priority_queue<ListNode*,vector<ListNode*>,compare> minHeap;
//     int k= lists.size();
    
//     if(k==0)
//     {
//         return NULL;
//     }

//     for(int i=0;i<k;i++)
//     {  if(lists[i]!=nullptr)
//         {
//             minHeap.push(lists[i]);
            
//         }  //listarray contains the head

//     }

//     ListNode* head=nullptr;
//     ListNode* tail=nullptr;

//     while(!minHeap.empty())
//     {
//        ListNode* top=minHeap.top();
//         minHeap.pop();

//         if(top->next!=nullptr)
//         {
//             minHeap.push(top->next);
//         }

//         if(head==nullptr)
//         {//answer LL is empty
//             head=tail=top;
//         }
        
//         else
//         {
//             tail->next=top;
//             tail=top;
//         }
//     }
//     return head;
//     }
// };
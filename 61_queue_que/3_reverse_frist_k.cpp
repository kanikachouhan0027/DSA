//que
// Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

// Only following standard operations are allowed on queue.

// enqueue(x) : Add an item x to rear of queue
// dequeue() : Remove an item from front of queue
// size() : Returns number of elements in queue.
// front() : Finds front item.
// Note: The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.

// Expected Time Complexity : O(N)
// Expected Auxiliary Space : O(K)


//solution
// User function Template for C++

// class Solution
// {
//     public:
    
//     // Function to reverse first k elements of a queue.
//     queue<int> modifyQueue(queue<int> q, int k) {
//         // add code here.
//         int n=q.size();
//         stack<int> s;
//         for(int i=0;i<k;i++)
//         {
//             int ans=q.front();
//                q.pop();
//             s.push(ans);
         
//         }
        
//       while(!s.empty())
//         {
//             int ans=s.top();
//             s.pop();
//             q.push(ans);
//         }
//         for(int i=0;i<n-k;i++)
//         {
//             int ans=q.front();
//             q.pop();
//             q.push(ans);
            
//             }
//             return q;
//     }
// };
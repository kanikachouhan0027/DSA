//que
// Given a Queue Q containing N elements.
//  The task is to reverse the Queue. Your 
//  task is to complete the function rev(),
// that reverses the N elements of the queue.



//solution
// using stack--stack always 
//gives the output in reverse order
// class Solution
// {
//     public:
//     queue<int> rev(queue<int> q)
//     {
//         stack<int> s;
//         while(!q.empty())
//         {
//             int top=q.front();
//             q.pop();
//             s.push(top);
            
//         }
//         while(!s.empty())
//         {
//             int top=s.top();
//              s.pop();
//             q.push(top);
           
//         }
//         return q;
//     }
// };
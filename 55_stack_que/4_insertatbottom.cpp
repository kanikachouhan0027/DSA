// Problem statement
// You are given a stack/deque of integers 'MY-STACK' and an integer ‘X’. Your task is to insert ‘X’ to the bottom of ‘MY-STACK’ and return the updated stack/deque.

// Note :
// If ‘MY_STACK’ = [7, 1, 4, 5], then the first element represents the element at the bottom of the stack and the last element represents the element at the top of the stack.
// For Example :
// Let ‘MY_STACK’ = [7, 1, 4, 5] and ‘X’ = 9. So, ‘MY_STACK’ after insertion becomes [9, 7, 1, 4, 5].

//solution

// void Solve(stack<int>& myStack, int x)
// {
//     if(myStack.empty())
//     {
//         myStack.push(x);
//         return;
//     }
//     int top=myStack.top();
//     myStack.pop();
//     Solve(myStack,x);
//     myStack.push(top);
// }
// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
//     Solve(myStack, x);
//     return myStack;
// }

// Reverse a given stack of 'N' integers using recursion. You are required to make changes in the input parameter itself.



// Note: You are not allowed to use any extra space other than the internal stack space used due to recursion.



// Example:
// Input: [1,2,3,4,5] 
// Output: [5,4,3,2,1]

//solution

// void insertatbottom(stack<int> &stack,int x)
// {
//     if(stack.empty())
//     {
//         stack.push(x);
//         return;
//     }
//     int top=stack.top();
//     stack.pop();
//     insertatbottom(stack,x);
//     stack.push(top);
// }

// void reverseStack(stack<int> &stack) {
   
//   if(stack.empty())
// {
//     return;
// }
// int top1=stack.top();
// stack.pop();
// reverseStack(stack);
// insertatbottom(stack,top1);

// }
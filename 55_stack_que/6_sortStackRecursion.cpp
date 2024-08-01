// Problem statement
// You’re given a stack consisting of 'N' integers. Your task is to sort this stack in descending order using recursion.

// We can only use the following functions on this stack S.

// is_empty(S) : Tests whether stack is empty or not.
// push(S) : Adds a new element to the stack.
// pop(S) : Removes top element from the stack.
// top(S) : Returns value of the top element. Note that this function does not remove elements from the stack.
// Note :
// 1) Use of any loop constructs like while, for..etc is not allowed. 
// 2) The stack may contain duplicate integers.
// 3) The stack may contain any integer i.e it may either be negative, positive or zero.

//solution

// void sortedinsert(stack<int> &stack,int x)
// {
// 	if(stack.empty())
// 	{
// 		stack.push(x);
// 		return;
// 	}
// 	int top=stack.top();
// 	if(top<x)
// 	{
// 		stack.push(x);
// 		return;
// 	}
// 	else
// 	{   stack.pop();
// 		sortedinsert(stack,x);
// 		stack.push(top);
// 	}
// }
// void sortStack(stack<int> &stack)
// {
// 	if(stack.empty())
// 	{
//        return;
// 	}
// 	int top=stack.top();
// 	stack.pop();
// 	sortStack(stack);
// 	sortedinsert(stack,top);
// }
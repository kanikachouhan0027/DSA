// #include <bits/stdc++.h> 
// void Solve(stack<int>&inputStack,int count,int middle)
// {
//   if(count==middle)
//   {
//     inputStack.pop();
//     return;
//   }
  
  
//     int  top = inputStack.top();
//     inputStack.pop();
//     Solve(inputStack,count+1,middle);
//     inputStack.push(top);
  

// }



// void deleteMiddle(stack<int>&inputStack, int N){
//     int middle;
//     int count=0;
// if(N+1==1)
// {
//   inputStack.pop();
//   return;
// }
// if((N+1)%2==0)

// {
//   middle=((N+1)/2)-1;
// }  
// else
// {
//  middle=((N+1)/2);
// }
// Solve(inputStack,count,middle);
// }
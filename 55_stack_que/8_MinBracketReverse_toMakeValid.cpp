// Problem statement
// Ninja has been given a string ‘STR’ containing either ‘{’ or ‘}’. 'STR’ is called valid if all the brackets are balanced. Formally for each opening bracket, there must be a closing bracket right to it.

// For Example:
// “{}{}”, “{{}}”, “{{}{}}” are valid strings while “}{}”, “{}}{{}”, “{{}}}{“ are not valid strings.
// Ninja wants to make ‘STR’ valid by performing some operations on it. In one operation, he can convert ‘{’ into ‘}’ or vice versa, and the cost of one such operation is 1.

// Your task is to help Ninja determine the minimum cost to make ‘STR’ valid.

// For Example:
// Minimum operations to make ‘STR’ =  “{{“ valid is 1.
// In one operation, we can convert ‘{’ at index ‘1’ (0-based indexing) to ‘}’. The ‘STR’ now becomes "{}" which is a valid string.

// Note:
// Return -1 if it is impossible to make ‘STR’ valid.

//solution

// int findMinimumCost(string str) {
//   stack<char> s;
//   int open=0;
//   int closed=0;
//  if(str.length()%2!=0)
//  {
//    return -1;
//  }
//  //even len

//  else
//  {  
//       for(int i=0;i<str.length();i++)
//       {
//         if (str[i] == '{') 
//         {
//           s.push(str[i]);
//           open++;
//         } 
//         else 
//         {
          
//           if (!s.empty() && s.top() == '{')
//           {
//             s.pop();
//             open--;
//           }
//           else
//           {
//              s.push(str[i]);
             
//              closed++;
             
//           }
//         }
//       }

//  }
//  return ((open+1)/2)+((closed+1)/2);
// }

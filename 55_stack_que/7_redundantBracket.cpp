// Problem statement
// Given valid mathematical expressions in the form of a string. You are supposed to return true if the given expression contains a pair of redundant brackets, else return false. The given string only contains ‘(‘, ’)’, ‘+’, ‘-’, ‘*’, ‘/’ and lowercase English letters.

// Note :
// A pair of brackets is said to be redundant when a subexpression is surrounded by needless/ useless brackets.

// For Example :
// ((a+b)) has a pair of redundant brackets. The pair of brackets on the first and last index is needless. 
// While (a + (b*c)) does not have any pair of redundant brackets.

//solution

// void isredun(stack<char> &st)
// {  if(st.empty())
// {
//     return;
// }
//     if(st.top()=='(')
//     {
//        st.pop();
//        return;
//     }
//     st.pop();
//     isredun(st);

    
// }
// bool findRedundantBrackets(string &s)
// {stack<char> st;
// for(int i=0;i<s.length();i++)
// {
//     char ch=s[i];
//     if(ch=='(' || ch== '+'||ch== '-'|| ch=='*'||ch== '/')
//     {
//          st.push(ch);
//     } else {
//          if (ch == ')')
//          {  
//             if(st.top()=='(')
//             {
//                 return true;
//             }
//             else{
//                 isredun(st);
//             }
//          }
//     }
// }
// return false;
// }
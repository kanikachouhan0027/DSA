// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]=='}' || s[i]==']' ||s[i]==')'  )
             
//                {  if(st.empty())
//                    {
//                        return false;
//                    }
//                 else
//                 {
                    
//                     if(s[i]==')' && st.top()=='(' )
//                     {
//                         st.pop();
//                     }
//             else if(s[i]=='}' && st.top()=='{' )
//                     {
//                         st.pop();
//                     }
//                else if(s[i]==']' && st.top()=='[' )
//                     {
//                         st.pop();
//                     }
                    
//                     else
//                     {
//                         return false;
//                     }
//                 }}
//                 else
//                 {
//                     st.push(s[i]);
//                 }
//                }
        
//                if(st.empty())
//                {
//                    return true;
//     }
//               return false;}
// };
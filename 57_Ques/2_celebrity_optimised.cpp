//solution

// class Solution 
// {
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {stack<int> st;
//         for(int i=0;i<n;i++)
//         {
//             st.push(i);
//         }
        
//         while(st.size()!=1)
//         {
//             int A=st.top();
//             st.pop();
//             int B=st.top();
//             st.pop();
            
//             //A knows B
//             if(M[A][B]==1)
//             {//A knows B
//                     st.push(B);
    
//             }
                
//             else if(M[B][A]==1)//B knows A
//             {
//                 st.push(A);
//             }
        
//             }
//             int celebrity=st.top();
//             int count1=0;
//             for(int k=0;k<n;k++)
//             {//knowsothers?
               
//                 if(M[celebrity][k]==0 && k!=celebrity)
//                 {
//                     count1++;
//                 }
//             }
//             if(count1==n-1)//don't know anyone
//             {  int count2=0;//othersknow?
//                 for(int j=0;j<n;j++)
//                 {
//                     if(j!=celebrity && M[j][celebrity]==1)
//                     {
//                         count2++;
//                     }
//                 }
//                 if(count2==n-1)//eeryone knows it
//                 {
//                     return celebrity;
//                 }
//             }
//             return -1;
//     }
// };
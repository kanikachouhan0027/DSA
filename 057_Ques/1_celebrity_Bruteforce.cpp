// A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
// A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
// Return the index of the celebrity, if there is no celebrity return -1.
// Note: Follow 0 based indexing.
// Follow Up: Can you optimize it to O(N)



//solution

// class Solution 
// {
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
    

// for(int i = 0; i < n; i++)
// {   
    
//     int count1 = 0;
//     for(int j = 0; j < n; j++)
//     { 
//         if(j != i && M[i][j] == 0)
//         {
    
//             count1++;
//         }   
//     }
        
//     if( count1 == n - 1)
//     {
//         int count2 = 0;
//         for(int k = 0; k < n; k++)
//         { 
//             if(k != i && M[k][i] == 1)
//             {
//                 count2++;
//             }
//             else if (k != i && M[k][i] != 1) {
//                 break;
//             }
//         }
//         if(count2 == n - 1)
//         {
//             return i;
//         }
//     }
// }
// return -1;

//     }
// };
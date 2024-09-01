// bool isSafe(int row,int col,char val,vector<vector<char>> &board)
// {
//     int n=board.size();
//     for(int i=0;i<n;i++)
//     { //row                       col                  3*3 matrix
//         if(board[row][i]==val || board[i][col]==val || board[3*(row/3)+i/3][3*(col/3)+i%3]==val)
//         {
//             return false;
//         }
//     }
//     return true;
// } 
// bool solve(vector<vector<char>>& board)
// {  int n=board.size();
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<n;col++)
//         {
//             if(board[row][col]=='.')
//             {
//                 //empty
//                 for(char i='1';i<='9';i++)
//                 {
//                     if(isSafe(row,col,i,board))
//                     { 
//                         board[row][col]=i;
//                         bool aageSolutionPossible=solve(board);
//                         if(aageSolutionPossible)
//                         {
//                             return true;        
//                         }
//                         else
//                         {   //backtrack;
//                             board[row][col]='.';
//                         }
//                     }

                   
//                 }
//                 return false;
//             }
//         }
//     }
//     return true;
// }


// class Solution {
// public:
//     void solveSudoku(vector<vector<char>>& board) {
//         bool possible=solve(board);
//     }
// };
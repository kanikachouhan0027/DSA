// 51. N-Queens
// Hard

// 12505

// 292

// Add to List

// Share
// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

 

// Example 1:


// Input: n = 4
// Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
// Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
// Example 2:

// Input: n = 1
// Output: [["Q"]]
 

// Constraints:

// 1 <= n <= 9


//sol

// void addSolution(vector<vector<int>> &board,vector<vector<string>> &ans,int n)
// {  
// 	vector<string> temp;
//    for(int i=0;i<n;i++)
//    {   string eachRow="";
//         for(int j=0;j<n;j++)
//         {
//             if(board[i][j]==1)
//             {
//                 eachRow.push_back('Q');
//             }
//             else
//             {
//                eachRow.push_back('.');
//             }
//         }
//     temp.push_back(eachRow);
       
//    }
//     ans.push_back(temp);
	
	
// }



// void solve(int col,vector<vector<int>> &board,vector<vector<string>> &ans,unordered_map<int,bool> &leftRow,unordered_map<int,bool> &upperDiagonal,unordered_map<int,bool> &lowerDiagonal,int n)
// {
// 	//base case
// 	if(col==n)
// 	{
// 		addSolution(board,ans,n);
// 		return;
// 	}
    
	
// 	//traverse each row

// 	for(int row=0;row<n;row++)
// 	{
// 		if( !leftRow[row] && !upperDiagonal[row+col] && !lowerDiagonal[(n-1)+(col-row)])
// 		{
//             //place the queen
// 			board[row][col]=1;
// 		    leftRow[row]=true;
// 			upperDiagonal[row+col]=true;
// 			lowerDiagonal[(n-1)+(col-row)]=true;
// 			//recursive call
// 			solve(col+1,board,ans,leftRow, upperDiagonal, lowerDiagonal,n);
// 			//backTrack
// 			board[row][col]=0;
// 			leftRow[row] = false;
//             upperDiagonal[row+col]=false;
// 			lowerDiagonal[(n-1)+(col-row)]=false;
// 		}
// 	}
// }




// class Solution {
// public:
//     vector<vector<string>> solveNQueens(int n) {
//     vector<vector<int>> board(n,vector<int>(n,0));
// 	vector<vector<string>> ans;
    
// 	unordered_map<int,bool> leftRow;
// 	unordered_map<int,bool> upperDiagonal;
// 	unordered_map<int,bool> lowerDiagonal;

// 	solve(0,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
	
// 	return ans;
//     }
// };
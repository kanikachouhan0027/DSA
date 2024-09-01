// N-Queen Problem
// Difficulty: HardAccuracy: 35.43%Submissions: 91K+Points: 8
// The n-queens puzzle is the problem of placing n queens on a (n×n) chessboard such that no two queens can attack each other.
// Given an integer n, find all distinct solutions to the n-queens puzzle. Each solution contains distinct board configurations of the n-queens placement, where the solutions are a permutation of [1,2,3..n] in increasing order, here the number in the ith place denotes that the ith-column queen is placed in the row with that number. For eg below figure represents a chessboard [3 1 4 2].



// Examples:

// Input: 1
// Output: [1]
// Explaination: Only one queen can be placed in the single cell available.
// Input: 4
// Output: [[2 4 1 3 ],[3 1 4 2 ]]
// Explaination: These are the 2 possible solutions.
// Expected Time Complexity: O(n!)
// Expected Auxiliary Space: O(n2) 

// //sol
// void solve(int col,vector<vector<int>> &board,vector<vector<int>> &ans,vector<int> &rows,unordered_map<int,bool> &leftRow,unordered_map<int,bool> &upperDiagonal,unordered_map<int,bool> &lowerDiagonal,int n)
// {
// 	//base case
// 	if(col==n)
// 	{
// 	  ans.push_back(rows);
// 		return;
// 	}
    
	
// 	//traverse each row

// 	for(int row=0;row<n;row++)
// 	{
// 		if( !leftRow[row] && !upperDiagonal[row+col] && !lowerDiagonal[(n-1)+(col-row)])
// 		{
//             //place the queen
// 			board[row][col]=1;
// 			rows.push_back(row+1);
// 		    leftRow[row]=true;
// 			upperDiagonal[row+col]=true;
// 			lowerDiagonal[(n-1)+(col-row)]=true;
// 			//recursive call
// 			solve(col+1,board,ans,rows,leftRow, upperDiagonal, lowerDiagonal,n);
// 			//backTrack
// 			board[row][col]=0;
// 			rows.pop_back();
// 			leftRow[row] = false;
//             upperDiagonal[row+col]=false;
// 			lowerDiagonal[(n-1)+(col-row)]=false;
// 		}
// 	}
// }


// class Solution{
// public:
//     vector<vector<int>> nQueen(int n) {
//       vector<vector<int>> board(n,vector<int>(n,0));
// 	vector<vector<int>> ans;
    
//     //row number--> 1 indexed
//     vector<int> rows;
    
// 	unordered_map<int,bool> leftRow;
// 	unordered_map<int,bool> upperDiagonal;
// 	unordered_map<int,bool> lowerDiagonal;

// 	solve(0,board,ans,rows,leftRow,upperDiagonal,lowerDiagonal,n);
	
// 	return ans;
//     }
// };
//  The N - Queens Puzzle
// Moderate
// 80/80
// Contributed by
// 61 upvotes
// Asked in companies
// Problem statement
// The N Queens puzzle is the problem of placing N chess queens on an N * N chessboard such that no two queens attack each other.

// Given an integer ‘N’, print all distinct solutions to the ‘N’ queen puzzle.

// Two queens on the same chessboard can attack each other if any of the below condition satisfies:  
// 1. They share a row. 
// 2. They share a column. 
// 3. They share a diagonal. 
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 1
// 4   
// Sample Output 1:
// 0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0
// 0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
// Explanation for Sample Input 1:
// The 4 queens can be placed in two ways in a 4*4 chessboard. Both the configurations are shown in the below figure. 

// //approach1
// #include <bits/stdc++.h> 
// bool isSafe(int row,int col,vector<vector<int>> &board,int n)
// {
// 	//checking rows
//  int x=row;
// 	int y=col;

// 	while(y>=0)
// 	{
// 		if(board[x][y]==1)
// 		{
// 			return false;
// 		}
// 		y--;
// 	}

// 	x=row;
// 	y=col;
// 	//check diagonally
// 	//upper left diagonal
// 	while(x>=0 && y>=0)
// 	{
// 		if(board[x][y]==1)
// 		{
// 			return false;
// 		}
// 		x--;
// 		y--;
// 	}
// 	x=row;
// 	y=col;

// 	while(x<n && y>=0)
// 	{
// 		if(board[x][y]==1)
// 		{
// 			return false;
// 		}
// 		x++;
// 		y--;
// 	}
// 	return true;

// }

// void addSolution(vector<vector<int>> &board,vector<vector<int>> &ans,int n)
// {  
// 	 vector<int> temp;
// 	for(int row=0;row<n;row++)
// 	{
// 		for(int col=0;col<n;col++)
// 		{
// 			temp.push_back(board[row][col]);
// 		}
// 	}
	
// 	ans.push_back(temp);
// }



// void solve(int col,vector<vector<int>> &board,vector<vector<int>> &ans,int n)
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
// 		if(isSafe(row,col,board,n))
// 		{
// 			board[row][col]=1;
// 			solve(col+1,board,ans,n);
// 			board[row][col]=0;
// 		}
// 	}
// }

// vector<vector<int>> nQueens(int n)
// {
// 	vector<vector<int>> board(n,vector<int>(n,0));
// 	vector<vector<int>> ans;
// 	solve(0,board,ans,n);
	
// 	return ans;
// }

// //optimised using hashmap for checking is safe

// #include <bits/stdc++.h> 

// void addSolution(vector<vector<int>> &board,vector<vector<int>> &ans,int n)
// {  
// 	 vector<int> temp;
// 	for(int row=0;row<n;row++)
// 	{
// 		for(int col=0;col<n;col++)
// 		{
// 			temp.push_back(board[row][col]);
// 		}
// 	}
	
// 	ans.push_back(temp);
// }



// void solve(int col,vector<vector<int>> &board,vector<vector<int>> &ans,unordered_map<int,bool> &leftRow,unordered_map<int,bool> &upperDiagonal,unordered_map<int,bool> &lowerDiagonal,int n)
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
//          //place the queen
// 			board[row][col]=1;
// 		    leftRow[row]=true;
// 			upperDiagonal[row+col]=true;
// 			lowerDiagonal[(n-1)+(col-row)]=true;
// 			//recursive call
// 			solve(col+1,board,ans,leftRow, upperDiagonal, lowerDiagonal,n);
// 			//backTrack
// 			board[row][col]=0;
// 			leftRow[row] = false;
//          upperDiagonal[row+col]=false;
// 			lowerDiagonal[(n-1)+(col-row)]=false;
// 		}
// 	}
// }

// vector<vector<int>> nQueens(int n)
// {
// 	vector<vector<int>> board(n,vector<int>(n,0));
// 	vector<vector<int>> ans;
    
// 	unordered_map<int,bool> leftRow;
// 	unordered_map<int,bool> upperDiagonal;
// 	unordered_map<int,bool> lowerDiagonal;

// 	solve(0,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
	
// 	return ans;
// }
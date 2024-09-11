//  Creating and Printing
// Easy
// 40/40
// Average time to solve is 15m
// Contributed by
// 127 upvotes
// Asked in company
// Problem statement
// You are given an undirected graph of 'N' nodes and 'M' edges. Your task is to create the graph and print the adjacency list of the graph. It is guaranteed that all the edges are unique, i.e., if there is an edge from 'X' to 'Y', then there is no edge present from 'Y' to 'X' and vice versa. Also, there are no self-loops present in the graph.



// In graph theory, an adjacency list is a collection of unordered lists used to represent a finite graph. Each list describes the set of neighbors of a vertex in the graph.



// For Example:
// If 'N' = 3 and edges = {{2,1}, {2,0}}.

// So, the adjacency list of the graph is stated below.
// 0 → 2
// 1 → 2
// 2 → 0 → 1
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 4 3
// 1 2
// 0 3
// 2 3
// Sample Output 1:
// 0 3
// 1 2
// 2 1 3
// 3 0 2

// vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
//   vector<vector<int>> ans(n);
//   for(int i=0;i<m;i++)
//   {
//     int u=edges[i][0];
//     int v=edges[i][1];
  
//     ans[u].push_back(v);
//     ans[v].push_back(u);

//   }
//   vector<vector<int>> adjList(n);
//   for(int i=0;i<n;i++)
//   {
//    adjList[i].push_back(i);
  
//     for(int j=0;j<ans[i].size();j++)
//     {
//       adjList[i].push_back(ans[i][j]);
//     }
//   }
//   return adjList;
// }
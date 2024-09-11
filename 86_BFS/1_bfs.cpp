// tex 2 has a directed edge towards vertex 5.
// Vertices 3, 4, and 5 have no outgoing edges.

// We can also see this in the diagram below.

// BFS traversal: 0 1 2 3 4 5

// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 8 7
// 0 1
// 0 2
// 0 3
// 1 4
// 1 7
// 2 5
// 3 6
// Sample Output 1:
// 0 1 2 3 4 7 5 6
// Explanation for sample input 1:

// n = 8: There are 8 vertices in the graph, labeled from 0 to 7.
// m = 7: There are 7 directed edges in the graph.

// The directed edges are as follows:
// Vertex 0 has directed edges towards vertices 1, 2, and 3.
// Vertex 1 has directed edges towards vertices 4 and 7.
// Vertex 2 has a directed edge towards vertex 5.
// Vertex 3 has a directed edge towards vertex 6.
// Vertices 4, 5, 6, and 7 have no outgoing edges.

// Adjacency list: {{1,2,3}, {4,7}, {5}, {6}, {}, {}, {}, {}}. This is passed to the bfsTraversal function.
// Sample Input 2:
// 4 4
// 0 1
// 0 2
// 1 2
// 0 3
// Sample Output 2:
// 0 1 2 3
// Constraints :
// 1 <= 'n', 'm' <= 10^4

// Where 'n' is the number of vertices and 'm' is the number of edges.

// Time Limit: 1 second

// //sol--adjList already given

// void bfs(vector<vector<int>> &adj,unordered_map<int,bool> &visited,vector<int> &ans,int node)
// {
//   queue<int> q;
//   q.push(node);
//   visited[node]=true;

// while(!q.empty())
// {
//   int frontNode=q.front();
//   q.pop();

//   ans.push_back(frontNode);

//   for(auto i:adj[frontNode])
//   {
//     if(!visited[i])
//     {
//       q.push(i);
//       visited[i]=true;
//     }
//   }
// }
// }




// vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
// vector<int> ans;
// unordered_map<int,bool> visited;
// //initializing ever node to false
// for (int i = 0; i < n; i++) {
//   visited[i] = false;
// }

// bfs(adj,visited,ans,0);

// return ans;
// }

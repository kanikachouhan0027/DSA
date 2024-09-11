// Detect Cycle In A Directed Graph
// Moderate
// 80/80
// Average time to solve is 30m
// 138 upvotes
// Asked in companies
// Problem statement
// You are given a directed graph having ‘N’ nodes. A matrix ‘EDGES’ of size M x 2 is given which represents the ‘M’ edges such that there is an edge directed from node EDGES[i][0] to node EDGES[i][1].

// Find whether the graph contains a cycle or not, return true if a cycle is present in the given directed graph else return false.

// For Example :
// In the following directed graph has a cycle i.e. B->C->E->D->B.

// Note :
// 1. The cycle must contain at least two nodes.
// 2. It is guaranteed that the given graph has no self-loops in the graph.
// 3. The graph may or may not be connected.
// 4. Nodes are numbered from 1 to N.
// 5. Your solution will run on multiple test cases. If you are using global variables make sure to clear them.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 ≤ T ≤ 5

// 2 <= N <= 100
// 1 <= M <= min(100,N(N-1)/2)
// 1 <= EDGES[i][0], EDGES[i][1] <= N

// Where ‘T’ is the number of test cases.

// Time Limit: 1 sec
// Sample Input 1 :
// 1
// 5
// 6
// 1 2
// 4 1
// 2 4
// 3 4
// 5 2
// 1 3
// Sample Output 1 :
// true
// Explanation For Input 1 :
// The given graph contains cycle 1 -> 3 -> 4 -> 1 or the cycle 1 -> 2 -> 4 -> 1.
// Sample Input 2 :
// 2
// 5
// 4
// 1 2
// 2 3
// 3 4
// 4 5
// 2
// 1
// 1 2
// Sample Output 2 :
// false
// false
// Explanation For Input 2 :
// The given graphs don’t contain any cycle.



// //sol--if call usi se jaakr usi pr aa jaye

// #include <unordered_map>
// #include <list>
// #include <vector>

// using namespace std;

// int dfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited,
//         unordered_map<int, bool> &dfsVisited, int node) {
//     visited[node] = true;
//     dfsVisited[node] = true;

//     // Recursive calls for its neighbors
//     for (auto neighbor : adjList[node]) {
//         if (dfsVisited[neighbor]) {
//            // i.e ek node se call jakr usi node pr aa jaye
//             // If neighbor is in the recursion stack, a cycle is detected
//             return 1;
//         }
//         if (!visited[neighbor]) {
//             // Perform DFS if the neighbor is not visited
//             int cycleDetected = dfs(adjList, visited, dfsVisited, neighbor);
//             if (cycleDetected) {
//                 return 1;
//             }
//         }
//     }

//     dfsVisited[node] = false; // Backtrack
//     return 0;
// }

// void prepareList(unordered_map<int, list<int>> &adjList, vector<pair<int, int>> &edges) {
//     for (const auto &edge : edges) {
//         int u = edge.first;
//         int v = edge.second;
//         adjList[u].push_back(v);
//     }
// }

// int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges) {
//     unordered_map<int, list<int>> adjList;
//     unordered_map<int, bool> visited;
//     unordered_map<int, bool> dfsVisited;

//     // Prepare adjacency list
//     prepareList(adjList, edges);

//     // Initialize visited and dfsVisited for all nodes from 1 to n
//     for (int i = 1; i <= n; ++i) {
//         if (!visited[i]) {
//             int isCycle = dfs(adjList, visited, dfsVisited, i);
//             if (isCycle) {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
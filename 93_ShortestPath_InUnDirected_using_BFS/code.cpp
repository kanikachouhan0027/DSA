// Shortest path in an unweighted graph
// Moderate
// 80/80
// Average time to solve is 25m
// 130 upvotes
// Asked in companies
// Problem statement
// The city of Ninjaland is analogous to the unweighted graph. The city has ‘N’ houses numbered from 1 to ‘N’ respectively and are connected by M bidirectional roads. If a road is connecting two houses ‘X’ and ‘Y’ which means you can go from ‘X’ to ‘Y’ or ‘Y’ to ‘X’. It is guaranteed that you can reach any house from any other house via some combination of roads. Two houses are directly connected by at max one road.

// A path between house ‘S’ to house ‘T’ is defined as a sequence of vertices from ‘S’ to ‘T’. Where starting house is ‘S’ and the ending house is ‘T’ and there is a road connecting two consecutive houses. Basically, the path looks like this: (S , h1 , h2 , h3 , ... T). you have to find the shortest path from ‘S’ to ‘T’.

// For example
// In the below map of Ninjaland let say you want to go from S=1 to T=8, the shortest path is (1, 3, 8). You can also go from S=1 to T=8  via (1, 2, 5, 8)  or (1, 4, 6, 7, 8) but these paths are not shortest.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 100
// 2 <= N <= 10 ^ 3
// 1 <= M <= min( N *(N - 1) / 2 , 1000 )
// 1 <= S, T <= N

// Time Limit: 1 sec
// Sample input 1 :
// 1
// 4 4
// 1 4
// 1 2
// 2 3
// 3 4
// 1 3
// Sample Output 1 :
// ( 1 , 3 , 4 )
// Explanation of Sample input 1 :
// In the above graph there are two ways to go from 1 to 4 ,
// ( 1 , 2 , 3 , 4 ) and ( 1 , 3 , 4 ) but the second path is the shortest path.

// Sample input 2 :
// 1
// 8 9
// 1 8
// 1 2
// 1 3
// 1 4
// 2 5
// 5 8 
// 3 8
// 4 6
// 6 7
// 7 8
// Sample output 2 :
// ( 1 , 3 , 8 )


// #include<unordered_map>
// #include<list>
// #include<queue>



// void bfs(unordered_map<int,list<int>> &adjList,vector<bool> &visited,vector<int> &parent,int node)
// {
//     queue<int> q;
//     q.push(node);
//     visited[node]=true;
//     parent[node]=-1;

//     while(!q.empty())
//     {
//         int frontNode=q.front();
//         q.pop();
        
//          for(auto neighbour:adjList[frontNode])
//                 {
//                     if(!visited[neighbour])
//                     {
//                         q.push(neighbour);
//                         visited[neighbour]=true;
//                         parent[neighbour]=frontNode;
//                     }
//                 }
//     }
// }


// void prepareList(unordered_map<int,list<int>> &adjList,vector<pair<int,int>> &edges,int m)
// {
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i].first;
//         int v=edges[i].second;

//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//     }
// }

// vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
   
// vector<int> ans;
// if(s==t)
// {
//     ans.push_back(s);
//     ans.push_back(t);
//     return ans;
// }
// vector<bool> visited(n+1,false);
// vector<int> parent(n+1,-1);
// parent[0]=-1;

// unordered_map<int,list<int>> adjList;

// prepareList(adjList,edges,m);
 
// bfs(adjList,visited,parent,s); 

// int currentNode=t;
// ans.push_back(t);

// while(currentNode!=s)
// {
//     currentNode=parent[currentNode];
//     ans.push_back(currentNode);
// }

// reverse(ans.begin(),ans.end());
// return ans;

// }



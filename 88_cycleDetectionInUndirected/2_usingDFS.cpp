// #include<queue>
// #include<list>
// #include<unordered_map>

// bool isCyclicDFS(unordered_map<int,list<int>> &adjList,unordered_map<int,bool> &visited,
// int parent,int node)
// {

// visited[node]=true;
// //recursive calls for its neighbours
// for(auto neighbour:adjList[node])
// {
//     if(visited[neighbour] && neighbour!=parent)
//     {
//         return true;
//     }
//     else if(!visited[neighbour])
//     {
//         visited[neighbour]=true;
//         bool cyclePresent=isCyclicDFS(adjList,visited,node,neighbour);
//         if(cyclePresent)
//         {
//             return true;
//         }
//     }
// }
// return false;
    
// }
    






// void prepareList(unordered_map<int,list<int>> &adjList,vector<vector<int>>& edges,int m)
// {
//     for(int i=0;i<m;i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];

//         adjList[u].push_back(v);
//         adjList[v].push_back(u);
//     }
// }


// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     unordered_map<int,list<int>> adjList;
//     unordered_map<int,bool> visited;
//     int parent;

//     //preparing the adjList

//     prepareList(adjList,edges,m);

//     //traversing all the components;

//     for(int i=0;i<n;i++)
//     {   bool isCyclic;
        
//         if(!visited[i])
//         {  
//             //it entered this means a new component
          
//            isCyclic=isCyclicDFS(adjList,visited,-1,i);
//         }
        
//         if(isCyclic)
//         {
//             return "Yes";
//         }
        
//     }

// return "No";

// }

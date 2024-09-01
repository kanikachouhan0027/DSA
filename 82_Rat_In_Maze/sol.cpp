// 

//sol

// #include <bits/stdc++.h> 
// bool isSafe(int newx,int newy,vector<vector<bool>> &visited,int n,vector<vector<int>> &arr)

// {
//    return ((newx>=0 && newx<n) && (newy>=0 && newy<n ) && visited[newx][newy]!=1 && arr[newx][newy]==1);
   

   
// }
// void getPath(int x,int y,vector<string> &output,int n,string path, vector < vector < bool >> &visited,vector<vector<int>> &arr)
// {
//    if(x==n-1 && y==n-1)
//    {
//       //one path completed
//       output.push_back(path);
//       return;
//    }
  
//    visited[x][y]=true;

//    //down
//    if(isSafe(x+1,y,visited,n,arr))
//    { 
//       getPath(x+1,y,output,n,path+'D',visited,arr);
//    }
   
//    //left
//    if(isSafe(x,y-1,visited,n,arr))
//    {  
//       getPath(x,y-1,output,n,path+'L',visited,arr);
//    }

//     //right
//    if(isSafe(x,y+1,visited,n,arr))
//    {  
//       getPath(x,y+1,output,n,path+'R',visited,arr);
//    }

//     //up
//    if(isSafe(x-1,y,visited,n,arr))
//    {  
//       getPath(x-1,y,output,n,path+'U',visited,arr);  
//    }
//    visited[x][y]=false;
// }


// vector < string > searchMaze(vector < vector < int >> & arr, int n) {
//    vector<string> output;
   
//    if(arr[0][0]==0)
//    {
//       output.push_back("");
//       return output;
//    }
//    string path="";
//    vector < vector < bool >> visited(n,vector<bool> (n,0));
//    getPath(0,0,output,n,path,visited,arr);
//    return output;
// }
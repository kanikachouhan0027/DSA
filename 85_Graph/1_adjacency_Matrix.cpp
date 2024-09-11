#include<iostream>
#include<vector>
using namespace std;
class graph
{
    public:
    vector<vector<int>> adjMatrix;
    int size;
    graph(int n)
    { size=n;
     adjMatrix=vector<vector<int>>(n,vector<int>(n,0));
 
    }
   
    
    void addToAdjacentMatrix(int u,int v,bool direction)
    {
      adjMatrix[u][v]=1;
      if(direction==0)
      {
        adjMatrix[v][u]=1;
      }
       
    }

    void print()
    {
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
               cout<<adjMatrix[i][j]<<" ";

            }
            cout<<endl;
        }
    }
};
int main()
{
     
    //input
    int n;
    cout<<"Enter No. Of Nodes:"<<endl;
    cin>>n;

    int m;
    cout<<"Enter No. Of Edges:"<<endl;
    cin>>m;

    //creating graph;
    graph g(n);

    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addToAdjacentMatrix(u,v,0);
        
    }

    //printing graph
    g.print();
}
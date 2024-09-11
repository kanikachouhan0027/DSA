#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph
{
    public:
    unordered_map<int,list<int>> map;

    void addAdjacentList(int u,int v,bool direction)
    {
        //undirected->direction->0
        //directed->direction->1
        map[u].push_back(v);
        if(direction==0)
        {
            map[v].push_back(u);
        }
    }

    void printing()
    {
        for(auto i:map)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<j<<",";
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
    graph g;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addAdjacentList(u,v,0);
        
    }

    //printing graph
    g.printing();

}

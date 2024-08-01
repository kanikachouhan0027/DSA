#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;
    v.push_back(1);
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;
    v.push_back(2);
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;
    v.push_back(3);
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;
    v.push_back(4);
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;
     v.push_back(5);
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;
    vector<int> last(v);
    for(int i:last){
        cout<<i<<" ";
    }
for(int i:v){
        cout<<i<<" ";
    }
    }
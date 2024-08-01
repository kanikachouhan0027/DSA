#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    set<int>s;
    s.insert(3);
     s.insert(8);
      s.insert(10);
       s.insert(4);
        s.insert(5);
    /*for(auto i:s){
        cout<<i<<" ";
    }*/
    set<int>::iterator it= s.begin();
it++ /*it=it+1 --> error since arithmetic operationj*/;
s.erase(it);
for(auto i:s){
        cout<<i<<" ";
}
set<int>::iterator itr=s.find(11);
cout<< *itr;

}
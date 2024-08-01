#include<iostream>
using namespace std;
void Reverse(string &Ex,int start)
{
if(start>Ex.length()-start){
    return ;
}
swap(Ex[start],Ex[Ex.length()-start-1]);
start++;
Reverse(Ex,start);


}
int main(){
    string Example="abcde";
    Reverse(Example,0);
    cout<<Example;
}
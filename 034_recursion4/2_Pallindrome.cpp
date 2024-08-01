#include<iostream>
using namespace std;
bool Pall(string s,int start){
    if(start>s.length()-1-start){
        return true;
    }
    if(s[start]!=s[s.length()-1-start]){
        return false;
    }
    start++;
    return Pall(s,start);
}
int main(){
    string s="book";
cout<<Pall(s,0);}
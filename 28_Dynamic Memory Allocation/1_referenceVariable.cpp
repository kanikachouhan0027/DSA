#include<iostream>
using namespace std;
int& fun(int a){
    int num=a;
    int &k=num;
    k++;
    return k;
}
void update(int &k){
    k++;
}
int main(){
    int i=5;
   int &j=i;
   //cout<<j;
  //j++;
 // cout<<i; 
 // j=8;
  cout<<j<<" ";
  cout<<i<<endl;
 // int &k=i;
 // k++;
  update(j);
  cout<<j<<" ";
  cout<<i<<endl;
  cout<<fun(i);
 // cout<<k;
 }
#include<iostream>
using namespace std;
int Nth_term(int n){
  return (3*n)+7;
}
int main(){
    int n;
    cout<<"which term u want: ";
    cin>>n;
    cout<<"the term is:"<<Nth_term(n)<<endl;
}
#include<iostream>
using namespace std;
int fibonacci(int n){
  if(n==1 || n==0){
    return n;
  }
  int smaller1=fibonacci(n-1);
  int smaller2=fibonacci(n-2);
  int bigger=smaller1+smaller2;
  return bigger;

    

    
}


int main(){
    int n;
    cin>>n;
   fibonacci(n);
}
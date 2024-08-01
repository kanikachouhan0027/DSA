#include<iostream>
using namespace std;
int  fibo(int n){
int a=0;
int b=1;
//cout<<a;
//cout<<b;
int sum=0;
for(int i=3;i<=n;i++){
    if(i==n){
    sum=a+b;
    return sum;}
    sum=a+b;
    a=b;
    b=sum;
    
}
}
int main(){
    int n;
    cin>>n;
  cout<< fibo(n);
}
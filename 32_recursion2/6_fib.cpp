#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 int a=0;
 int b=1;
 int sum=0;
 cout<<a<<endl<<b<<endl;
 for(int i=2;i<n;i++){
    sum=a+b;
    cout<<sum<<endl;
    a=b;
    b=sum;
   
 }
 cout<<n<<"th term is:-"<<b;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
int i=1;
int p=1;
while(i<=n){
   
    int k=1;
    while(k<=n-i+1){
        cout<<" ";
        k=k+1;
    }
     int j=1;
    while (j<=i-1){
        cout<<p;
        j=j+1;
        p=p+1;
    }
    cout<<endl;
    i=i+1;

}} 
#include<iostream>
using namespace std;
int main(){
cout<<"enter side";
int n;
cin>>n;
int i=1;
while (i<=n){
    int k=1;
    while(k<=n-i){
        cout<<" ";
        k=k+1;
    }
    int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;
    }
    int x=1;
    
    while(x<=i-1){
        cout<<"*";
      
        x=x+1;
    }
    cout<<endl;
    i=i+1;
}}








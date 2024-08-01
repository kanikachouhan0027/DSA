#include<iostream>
using namespace std;
int main(){
cout<<"enter side";
int n;
cin>>n;
int i=1;
while (i<=n){
    int k=1;
    int w=1;
    while(k<=n-i+1){
        cout<<w;
        w=w+1;
        k=k+1;
    }
    int j=1;
    while(j<=i-1){
        cout<<"*";
        j=j+1;
    }
    int q=1;
    while(q<=i-1){
        cout<<"*";
        q=q+1;
    }
    int x=1;
    int r=n-i+1;
    int t=n-i+1;
    while(x<=t){
        cout<<r;
         r=r-1;
        x=x+1;
    }
    cout<<endl;
    i=i+1;
}}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
int i=1;
while(i<=n){
   
    int k=1;
    while(k<=i-1){
        cout<<" ";
        k=k+1;
    }
     int j=1;
     int p=i;
    while (j<=n-i+1){
        cout<<p;
        p=p+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;

}}
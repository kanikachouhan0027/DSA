#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
    int i=1;
    int j=1;
    int k=1;                 
    while(i<=n){
        
        while (j<=k*n){//j<=n
            cout<<j;//cout<<k
            j=j+1;}//since i works for no of rows and j for columns and hame normal  counting hi to
        k=k+1;     // print krvani hai hence break ke liye j hai hi isiliye k ko hi print krva denge
    cout<<endl;
          i=i+1;}
        
        }



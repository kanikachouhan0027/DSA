#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
    int i=1;
   
    /*while(i<=n){
         int j=1;
        int k=i; 
        while (j<=i){
            cout<<k;
            k=k-1;
            j=j+1;}
        cout<<endl;
          i=i+1;}
        
        }*/

//2nd way*****

   
    while(i<=n){
         int j=1;     
        while (j<=i){
            cout<<i-j+1;
            
            j=j+1;}
        cout<<endl;
          i=i+1;}
        
        }

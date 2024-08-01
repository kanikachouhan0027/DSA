#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
    int i=1;
   
    while (i<=n){
        char c=65;
        int j=1;
        while (j<=n){
            cout<<c;
            j=j+1;
            c=c+1;
        }
        cout<<endl;
       
        i=i+1;
    }}

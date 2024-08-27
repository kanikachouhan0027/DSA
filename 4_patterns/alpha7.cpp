#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
    int i=1;
   char c=65;
    while (i<=n){
        int j=1;
       char ans=c+i-1;
        while (j<=n){
            cout<<ans;
            ans=ans+1;
            j=j+1;
        }
        cout<<endl;
       
        i=i+1;
    }}
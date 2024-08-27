#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
    int i=1;
   char c=65;
    while (i<=n){
        int j=n;
       char ans=c+j-1;
        while (j>=1){
            cout<<ans;
            j=j-1;
            ans=ans-1;
        }
        cout<<endl;
       
        i=i+1;
    }}
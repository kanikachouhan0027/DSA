#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
    int i=n;
   char c=65;
    while (i>=1){
        int j=1;
       char ans=c+i-1;
        while (j<=n){
            cout<<ans;
            j=j+1;
        }
        cout<<endl;
       
        i=i-1;
    }}

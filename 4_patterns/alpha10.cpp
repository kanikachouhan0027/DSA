#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
    int i=1;
    int k=n;
   char c=65;
    while (i<=n){
        int j=1;
       char ans=c+k-1;//ans=c+n-i and removing other variable k
        while (j<=i){
            cout<<ans;
            ans=ans+1;
            j=j+1;
        }
        cout<<endl;
       k=k-1;
        i=i+1;
    }}
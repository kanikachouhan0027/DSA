#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side"<<endl;
    cin>>n;
    int i=1;
    char c=65;//char c='A'
//char e=c+i-1
    while (i<=n){
        int j=1;
        while (j<=n){
            cout<<c;//cout<<e
            j=j+1;
            c=c+1;//no need to inc c in 2nd method
        }
        cout<<endl;
       
        i=i+1;
    }}
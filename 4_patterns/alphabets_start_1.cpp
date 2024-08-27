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
        while (j<=n){
            cout<<c;
            j=j+1;
        }
        cout<<endl;
        c=c+1;
        i=i+1;
    }}
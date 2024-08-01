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
       
        while (j<=i){//c='A'+i-1
            cout<<c;// just print this no need of other variable
            
            j=j+1;
        }
        c=c+1;//no need in 2nd ,method
        cout<<endl;
       
        i=i+1;
    }}
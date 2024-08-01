#include<iostream>
using namespace std;
int main(){
    cout<<"print the number"<<endl;
    int n;
    cin>>n;
    int sum=0;
    for(int i=2;i<=n-1;i++){
        if (n%i==0){
        sum=1;
        cout<<"not prime";
        break;
        
        }
    }
    if (sum==0){
        cout<<"  prime";
    
    }
   
}
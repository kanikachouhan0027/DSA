#include<iostream>
using namespace std;
int main(){
    cout<<"print the number"<<endl;
    int n;
    cin>>n;
    int sum=0;
    for(int i=2;i<=n-1;i++){
        if (n%i==0){
            sum=sum+1;
        
        }
    }
    if (sum>0){
        cout<<" not prime";
    
    }
    else{
        cout<<"prime";
    }
}
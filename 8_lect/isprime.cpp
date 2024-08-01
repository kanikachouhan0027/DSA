#include<iostream>
using namespace std;
bool isprime(int n){
    for (int i=2;i<=n-1;i++){
        if(n%i==0){
            return 0;
            
        }
    }
    return 1;
}

int main(){
    int a;
    cout<<"a"<<endl;
    cin>>a;
   if(isprime(a)==0){
    cout<<"not a prime";

   }
   else{
    cout<<"prime ";
   }
}
#include<iostream>
using namespace std;
int Power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int smaller=Power(a,b/2);
    if(b%2==0){
       
        return (smaller)*(smaller);
    
    }
    if(b%2!=0){
    
      return  a*(smaller)*(smaller);
        
    }
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Power of "<<a<<" raise to "<<b<<" is:"<<Power(a,b);
}
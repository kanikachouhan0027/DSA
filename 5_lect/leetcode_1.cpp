#include<iostream>
using namespace std;
int main(){
    cout<<"print the number"<<endl;
    int n;
    cin>>n;
    int prod=1;
    int sum=0;
    /*for(int i=1;;i++){      
    if (n>0){
        prod=prod*(n%10);
        sum=sum+(n%10);
        n=n/10;
    }
    else{
        break;
    }*/
    while(n>0){
        int digit=n%10;
        prod=prod*digit;
        sum=sum+digit;
        n=n/10;
    }
    int p=prod-sum;
   cout<< p;
}

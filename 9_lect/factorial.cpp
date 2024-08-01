#include<iostream>
using namespace std;
double fact(double n){
    double factorial=1;
    for(float i=1;i<=n;i++){
        factorial=factorial*i;

    }
    return factorial;
}
int main(){
    float n;
    cin>>n;
  cout<<"factorial is : "<<fact(n)<<endl;
}
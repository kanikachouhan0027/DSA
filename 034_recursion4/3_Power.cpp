#include<iostream>//limitiation is maximum power can be 31 only in case
                 // of 2 since range of int
using namespace std;
int Power(int a,int b){
    if(b==0){
        return 1;
    }
    int smaller=Power(a,b-1);
    int bigger=a*smaller;
    return bigger;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Power of "<<a<<" raise to "<<b<<" is:"<<Power(a,b);
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
if(n>pow(-2,31) && n<(pow(2,31)-1)){
if (n>0){
int i=1;
while (n!=0){
    int p=n%10;
    cout<<p;
    n=n/10;
    i++;}}
    if(n<0){
        cout<<"-";
int i=1;
while (n!=0){
        
        int q=-(n%10);
        cout<<q;
        n=n/10;
        i++;
    }
}
}
else{
    cout<<0;
}}